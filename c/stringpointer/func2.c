#include <stdio.h>

void set(char *s, size_t size) {
    snprintf(s, size, "Hello, World!");
}

int main(void) {
    char s[100];
    
    set(s, sizeof s);

    printf("%s\n", s);
    // Hello, World!

    return 0;
}
