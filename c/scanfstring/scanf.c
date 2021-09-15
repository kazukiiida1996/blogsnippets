#include <stdio.h>

int main(void) {
    char buf[10];

    scanf("%9s", buf);

    printf("buf[%s]\n", buf);

    for (char *p = buf; *p; p += 1) {
        putchar(*p);
    }

    return 0;
}
