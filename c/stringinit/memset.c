#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "Hello";  // 文字配列の定義

    memset(s, 0, sizeof s);  // 文字配列を0埋め

    printf("s[%s]\n", s);  // s[]

    return 0;
}