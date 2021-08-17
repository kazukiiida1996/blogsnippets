#include <stdio.h>

int main(void) {
    int a[] = {1, 2};
    int *b = a;

    printf("%d\n", b[0]);  // 1
    printf("%d\n", b[1]);  // 2

    return 0;
}
