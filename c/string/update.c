#include <stdio.h>

int main(void) {
    char s[] = "Good";
    s[0] = 'F';
    printf("%s\n", s);  // Food
    return 0;
}