#include <stdio.h>

int main(void) {
    int ary[3];

    printf("%d\n", ary[0]);  // 32766
    printf("%d\n", ary[1]);  // 0
    printf("%d\n", ary[2]);  // 0
    return 0;
}
