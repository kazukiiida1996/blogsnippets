#include <stdio.h>

int main(void) {
    // 文字列定数を3要素分確保する
    const char *ary[] = {
        "Hello",
        "World",
        NULL,
    };

    printf("%s\n", ary[0]);  // Hello
    printf("%s\n", ary[1]);  // World
    printf("%p\n", ary[2]);  // (nil)

    return 0;
}