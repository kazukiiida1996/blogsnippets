#include <stdio.h>

void func(int a) {
    printf("a = %d\n", a);
}

int main(void) {
    void (*funcptr)(int) = func;
    funcptr(10);  // a = 10
    return 0;
}
