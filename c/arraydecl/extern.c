// extern.c
#include <stdio.h>

extern int ary[3];

int main(void) {
    printf("%d\n", ary[0]);  // 1
    return 0;
}