#include <stdio.h>

int main(void) {
    const char *pary[] = {
        "My", "Name", "Is", "Anonymous", NULL,
    };

    for (const char **p = pary; *p; p += 1) {
        printf("%s\n", *p);
    }

    return 0;
}
