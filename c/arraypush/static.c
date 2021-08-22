#include <stdio.h>
#include <stdint.h>

typedef struct {
    int32_t array[100];  // 配列本体
    int32_t len;  // 現在の配列の長さ
} StaticIntArray;

StaticIntArray *
StaticIntArray_PushBack(StaticIntArray *self, int32_t elem) {
    int32_t capa = sizeof(self->array) / sizeof(self->array[0]);
    if (self->len >= capa) {
        return NULL;  // 配列の容量が足りない
    }

    self->array[self->len++] = elem;
}

void
StaticIntArray_Show(const StaticIntArray *self) {
    for (int32_t i = 0; i < self->len; i += 1) {
        printf("array[%d] = %d\n", i, self->array[i]);
    }
}

int
main(void) {
    StaticIntArray ary = {0};

    StaticIntArray_PushBack(&ary, 10);
    StaticIntArray_PushBack(&ary, 20);
    StaticIntArray_PushBack(&ary, 30);

    StaticIntArray_Show(&ary);

    return 0;
}
