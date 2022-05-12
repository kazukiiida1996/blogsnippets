#include <stdio.h>

int main(void) {
    int ary[3];
    int *p = ary;
    int len = sizeof p / sizeof p[0];

    printf("%d\n", len);  // 2

    return 0;
}
