#include <stdio.h>

int main(void) {
    int ary[3];  // int（4バイト）型の要素数3の配列
    int len = sizeof ary / sizeof ary[0];

    printf("%d\n", len);  // 3

    return 0;
}
