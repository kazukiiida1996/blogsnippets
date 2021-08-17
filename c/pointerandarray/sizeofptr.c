#include <stdio.h>

int main(void) {
    int a[100];
    int *b = a;

    printf("sizeof *b = %d bytes\n", sizeof(b));
    // sizeof *b = 8 bytes

    return 0;
}