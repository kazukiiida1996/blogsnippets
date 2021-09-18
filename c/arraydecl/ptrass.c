#include <stdio.h>

int main(void) {
    int *pary[3];
    int a = 1;

    pary[0] = &a;
    pary[1] = &a;
    pary[2] = &a;

    printf("%d\n", *pary[0]);  // 1
    return 0;
}
