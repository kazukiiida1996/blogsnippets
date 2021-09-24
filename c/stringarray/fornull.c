#include <stdio.h>

int main(void) {
    // 要素数が20の文字配列を3要素分確保する
    const char *ary[] = {
        "Hello",
        "World",
        NULL,
    };

    for (const char **p = ary; *p; p += 1) {
        printf("%s\n", *p);
        // Hello
        // World
    }

    return 0;
}
