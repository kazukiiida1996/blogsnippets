#include <stdio.h>

int main(void) {
    char s[] = "01";
    printf("%d\n", s[2] == '\0');  // 1
    return 0;
}
