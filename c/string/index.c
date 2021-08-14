#include <stdio.h>

int main(void) {
    char s1[] = "Good";
    const char *s2 = "Nice";

    printf("%c\n", s1[0]);  // G
    printf("%c\n", s2[1]);  // i
    return 0;
}