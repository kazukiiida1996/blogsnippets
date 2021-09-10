#include <stdio.h>

int main(void) {
    // 文字列定数のアドレスをポインタ変数sに代入
    const char *s = "Hello, World!";

    // 文字配列hwのアドレスをポインタ変数pに代入
    char hw[] = "Hello, World!";
    char *p = hw;

    return 0;
}