#include <stdio.h>

int main(void) {
    char s[10];  // 文字配列sの宣言

    snprintf(s, sizeof s, "Hello %d", 10);  // 文字配列sに書式をコピー

    printf("s[%s]\n", s);  // s[Hello 10]
    return 0;
}
