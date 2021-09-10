#include <stdio.h>

int main(void) {
    // 文字配列sに文字列定数「Hello, World!」を代入（コピー）する
    char s[] = "Hello, World!";
    printf("%s\n", s);  // Hello, World!

    // 要素数20の文字配列sに文字列定数「Hello, World!」を代入（コピー）する
    char s2[20] = "Hello, World!";
    printf("%s\n", s);  // Hello, World!

    return 0;
}
