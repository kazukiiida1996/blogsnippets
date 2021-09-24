#include <stdio.h>

int main(void) {
    // 静的な文字列定数の配列
    static const char *ary1[] = {
        "Hello",
        "World",
    };

    // 静的な文字配列の配列
    static char ary2[][20] = {
        "Hello",
        "World",
    };

    puts(ary1[0]);  // Hello
    puts(ary1[1]);  // World

    puts(ary2[0]);  // Hello
    puts(ary2[1]);  // World

    return 0;
}