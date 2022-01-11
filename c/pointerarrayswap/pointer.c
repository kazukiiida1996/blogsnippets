#include <stdio.h>

int main(void) {
    int ary[3];  // 配列
    int *p;  // ポインタ変数

    ary = p;  // error: assignment to expression with array type

    return 0;
}
