#include <stdio.h>

int main(void) {
    int a = 1;

    a &= 1;

    printf("%d\n", a);  // 1

    return 0;
}
