#include <stdio.h>

int main(void) {
    int a = 1;
    int *p = &a;  // 変数aのアドレスを取り出す

    printf("%p\n", p);  // pの持つアドレスの値を見る
    // 0x12345678

    return 0;
}
