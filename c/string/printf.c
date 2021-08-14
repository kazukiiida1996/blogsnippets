#include <stdio.h>

int main(void) {
    char s1[] = "Good";
    const char *s2 = "Nice";

    printf("%s\n", s1);  // Good
    printf("%s\n", s2);  // Nice
    return 0;
}