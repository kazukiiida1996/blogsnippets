#include <stdio.h>

int main(void) {
    char s[100];
    snprintf(s, sizeof s, "%s and %s", "Cat", "Dog");
    printf("%s\n", s);  // Cat and Dog
    return 0;
}