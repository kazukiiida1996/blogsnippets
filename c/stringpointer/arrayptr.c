#include <stdio.h>

int main(void) {
    char s[] = "Hello, World!";
    char *p = s;
    const char *cp = s;

    printf("p[%s]\n", p);  // Hello, World!
    printf("cp[%s]\n", cp);  // Hello, World!

    return 0;
}
