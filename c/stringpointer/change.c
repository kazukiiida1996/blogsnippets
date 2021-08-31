#include <stdio.h>

int main(void) {
    char s[] = "Cat";
    char *p = s;

    p[0] = 'R';  // 文字配列sの1要素目を変更

    printf("%s\n", s);  // Rat
    printf("%s\n", p);  // Rat

    return 0;
}
