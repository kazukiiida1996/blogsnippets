#include <stdio.h>

int main(void) {
    char s[100];
    fgets(s, sizeof s, stdin);  // 標準入力（stdin）から一行読み込み
    printf("[%s]\n", s);
    return 0;
}
