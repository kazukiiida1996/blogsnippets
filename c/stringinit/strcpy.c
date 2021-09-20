#include <stdio.h>
#include <string.h>

int main(void) {
    char s[10];  // 文字配列sの宣言

    strcpy(s, "Hello");  // 文字配列sにHelloをコピー

    printf("s[%s]\n", s);  // s[Hello]
    return 0;
}
