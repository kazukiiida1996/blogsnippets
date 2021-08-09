#include <stdio.h>

int main(void) {
    char s[] = "good";

    s[0] = 'f';
    printf("%s\n", s);  // food
    
    return 0;
}
