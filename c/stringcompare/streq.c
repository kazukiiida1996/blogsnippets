#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * s1とs2を比較し一致していたらtrueを返す
 * 一致していなかったらfalseを返す
 * LICENSE: MIT
 *
 * @param s1 文字列1
 * @param s2 文字列2
 * 
 * @return true | false
 */
bool streq(const char *s1, const char *s2) {
    return strcmp(s1, s2) == 0;
}

int main(void) {
    if (streq("Hello", "Hello")) {
        puts("一致");  // 一致
    } else {
        puts("不一致");
    }

    return 0;
}
