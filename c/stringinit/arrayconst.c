#include <stdio.h>

int main(void) {
    char ary[] = "Hello";  // 文字配列を文字列定数で初期化

    // aryの要素数を確認
    int n = sizeof(ary) / sizeof(ary[0]);
    printf("%d\n", n);  // 6

    char s[10] = "Hello";  // 要素数を明示する初期化

    // sの要素数を確認
    n = sizeof(s) / sizeof(s[0]);
    printf("%d\n", n);  // 6

    char str[2] = "Hello";
    // GCC: warning: initializer-string for array of ‘char’ is too long

    return 0;
}
