#include <stdio.h>

int main(void) {
    const char *s = "Hello";

    for (; *s; s += 1) {
        printf("%c\n", *s);
    }

    return 0;
}
