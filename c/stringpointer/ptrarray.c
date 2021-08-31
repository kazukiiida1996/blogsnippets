#include <stdio.h>

int main(void) {
    char *pary[] = {
        "Hello",
        "World!",
        NULL,
    };

    printf("%s\n", pary[0]);  // Hello
    printf("%s\n", pary[1]);  // World!

    for (char **p = pary; *p; p += 1) {
        printf("%s\n", *p);
    }

    return 0;
}
