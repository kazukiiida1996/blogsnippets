#include <stdio.h>

int main(void) {
    int a = 1;  // int型の変数a
    int *b = &a;  // 変数aのアドレスを持つポインタ変数b

    *b += 1;  // メモリ上のデータの書き換え（aの値を書き換え）

    // メモリ上のデータの参照（aの値を参照）
    printf("%d\n", *b);  // 2

    b = NULL;  // ポインタ変数bにNULLポインタを代入

    return 0;
}
