#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

enum {
    ERROR_STACK_ITEM_MSG_SIZE = 1024,
    ERROR_STACK_ITEMS_SIZE = 100,
};

typedef struct {
    const char *file_name;
    const char *func_name;
    long lineno;
    char message[ERROR_STACK_ITEM_MSG_SIZE];
} ErrorStackItem;

typedef struct {
    int32_t top;
    ErrorStackItem items[ERROR_STACK_ITEMS_SIZE];
} ErrorStack;

static void push_error(
    ErrorStack *stack,
    const char *file_name,
    const char *func_name,
    long lineno,
    const char *msg
) {
    if (stack->top >= ERROR_STACK_ITEMS_SIZE) {
        fprintf(stderr, "stack overflow\n");
        return;
    }

    ErrorStackItem *item = &stack->items[stack->top++];
    item->file_name = file_name;
    item->func_name = func_name;
    item->lineno = lineno;
    snprintf(item->message, sizeof item->message, "%s", msg);
}

void stack_trace(ErrorStack *stack) {
    fprintf(stderr, "Stack trace:\n");

    for (int32_t i = 0; i < stack->top; i += 1) {
        ErrorStackItem *item = &stack->items[i];

        fprintf(stderr, "    %d: %s: %s(): %ld: %s\n",
            i, item->file_name, item->func_name,
            item->lineno, item->message);
    }
}

static bool has_error(const ErrorStack *stack) {
    return stack->top != 0;
}

static void func(ErrorStack *stack) {
    push_error(stack, __FILE__, __func__, __LINE__, "猫の額ほど狭い");
}

int main(void) {
    ErrorStack stack = {0};

    push_error(&stack, __FILE__, __func__, __LINE__, "本日は晴天なり");
    func(&stack);
    push_error(&stack, __FILE__, __func__, __LINE__, "犬も歩けば棒に当たる");

    if (has_error(&stack)) {
        stack_trace(&stack);
    }

    return 0;
}
