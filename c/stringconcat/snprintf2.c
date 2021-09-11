#include <stdio.h>

int main(void) {
    const char *world = "World!";
    char dst[100];

    snprintf(dst, sizeof dst, "Hello, %s", world);

    printf("%s\n", dst);  // Hello, World!
    return 0;
}
