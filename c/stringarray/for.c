#include <stdio.h>

#define CAPA 3

int main(void) {
    // 要素数が20の文字配列を3要素分確保する
    char ary[CAPA][20] = {
        "Hello",
        "Good",
        "World",
    };

    for (size_t i = 0; i < CAPA; i += 1) {
        printf("%s\n", ary[i]);
        // Hello
        // Good
        // World
    }

    return 0;
}