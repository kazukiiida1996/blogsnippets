#include <stdio.h>

// 文字列定数を返す関数
const char *get_str(void) {
    return "Hello, World!";  // 文字列定数
}

int main(void) {
    const char *s = get_str();  // 文字列定数を得る

    printf("%s\n", s);  // Hello, World!

    return 0;
}
