#include <stdio.h>

// 配列の要素数を求めるマクロ
#define numof(ary) (sizeof ary / sizeof ary[0])

int main(void) {
    int ary[4];  // <- 初期化されていない配列

    for (int i = 0; i < numof(ary); i += 1) {
        ary[i] = 0;  // 要素を0で初期化
    }

    printf("%d\n", ary[0]);  // 0
    printf("%d\n", ary[1]);  // 0
    printf("%d\n", ary[2]);  // 0
    printf("%d\n", ary[3]);  // 0
    return 0;
}
