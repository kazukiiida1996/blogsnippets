#include <stdio.h>

int ary[4];  // <- 0クリアされます

int main(void) {
    printf("%d\n", ary[0]);  // 0
    printf("%d\n", ary[1]);  // 0
    printf("%d\n", ary[2]);  // 0
    printf("%d\n", ary[3]);  // 0
    return 0;
}
