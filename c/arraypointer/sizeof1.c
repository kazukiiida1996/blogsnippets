#include <stdio.h>

int main(void) {
    int array[4];
    int *p = array;  // arrayへのポインタ

    printf("%ld\n", sizeof p);  // 8

    return 0;
}
