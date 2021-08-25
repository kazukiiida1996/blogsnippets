#include <stdio.h>

struct Calculator {
    int (*add)(int, int);
};

int add(int a, int b) {
    return a + b;
}

int main(void) {
    struct Calculator calculator = {
        .add=add,
    };

    int result = calculator.add(1, 2);
    printf("%d\n", result);  // 3

    return 0;
}
