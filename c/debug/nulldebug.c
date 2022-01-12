// バグがあるプログラム
#include <stdio.h>

int main(void) {
    int *p = NULL;
    printf("%p\n", p);  // printfデバッグでポインタ変数のアドレスをチェック
    // printf("%d\n", *p);
    return 0;
}
