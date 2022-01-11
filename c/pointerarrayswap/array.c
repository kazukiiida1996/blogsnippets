#include <stdio.h>

int main(void) {
    int ary[] = {1, 2, 3};  // 配列を定義
    int *p = ary;  // ポインタpに配列を代入

    printf("%d\n", p[0]);  // 1
    printf("%d\n", p[1]);  // 2
    printf("%d\n", p[2]);  // 3
    return 0;
}
