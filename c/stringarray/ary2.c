#include <stdio.h>

int main(void) {
    // 要素数が20の文字配列をn要素分確保する
    char ary[][20] = {
        "Hello",
        "World",
    };

    puts(ary[0]);  // Hello
    puts(ary[1]);  // World

    return 0;
}