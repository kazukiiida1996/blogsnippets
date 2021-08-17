#include <stdio.h>

int main(void) {
    int a[] = {1, 2};

    printf("先頭アドレス = %p\n", a);
    // 先頭アドレス = 0x7ffdffb0dfc8

    printf("要素[0]のアドレス = %p\n", &a[0]);
    // 要素[0]のアドレス = 0x7ffdffb0dfc8

    printf("要素[1]のアドレス = %p\n", &a[1]);
    // 要素[1]のアドレス = 0x7ffdffb0dfcc

    printf("(a + 1)のアドレス = %p\n", (a + 1));
    // (a + 1)のアドレス = 0x7ffdffb0dfcc

    return 0;
}
