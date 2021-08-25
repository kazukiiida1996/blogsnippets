#include <stdio.h>

void func(int a) {
    printf("a = %d\n", a);
}

void test(void (*funcptr)(int a)) {
    funcptr(10);  // a = 10
}

int main(void) {
    test(func);
    return 0;
}
