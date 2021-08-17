#include <stdio.h>

int main(void) {
    int a[] = {1, 2};
    int *b = a;

    b[0] = 100;

    printf("b[0] = %d\n", b[0]);
    // b[0] = 100

    printf("a[0] = %d\n", a[0]);
    // a[0] = 100

    return 0;
}