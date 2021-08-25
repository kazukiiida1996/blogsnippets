#include <stdio.h>

void func(int a) {
}

int main(void) {
    void (*funcptr)(int) = func;

    printf("func = %p\n", func);  // func = 0x4004b2
    printf("funcptr = %p\n", funcptr);  // funcptr = 0x4004b2
    return 0;
}
