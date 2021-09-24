#include <stdio.h>

int main(void) {
    // 要素数が20の文字配列を3要素分確保する
    char ary[][20] = {
        "Hello",
        "Good",
        "World",
    };

    puts(ary[0]);  // Hello
    puts(ary[1]);  // Good
    puts(ary[2]);  // World

    return 0;
}