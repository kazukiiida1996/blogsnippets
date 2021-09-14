#include <stdio.h>

int main(void) {
    char buf[100];

    snprintf(buf, sizeof buf, "Hello, %s", "World!");

    printf("buf[%s]\n", buf);
    // Hello, World!
    return 0;
}
