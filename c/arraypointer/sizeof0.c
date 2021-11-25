#include <stdio.h>

int main(void) {
    int array[4];  // int型(4バイト)の要素が4つなので合計で16バイト
                   // ちなみにint型のサイズは環境依存です

    printf("%d\n", sizeof array);  // 16

    return 0;
}
