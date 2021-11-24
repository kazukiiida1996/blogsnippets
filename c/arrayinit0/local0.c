#include <stdio.h>

int main(void) {
    int ary[4] = {0};  // <- 0クリアされます

    printf("%d\n", ary[0]);  // 0
    printf("%d\n", ary[1]);  // 0
    printf("%d\n", ary[2]);  // 0
    printf("%d\n", ary[3]);  // 0
    return 0;
}
