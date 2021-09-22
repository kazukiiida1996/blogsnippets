#include <stdio.h>
#include <string.h>

int main(void) {
    const char *s = "Goood";
    char dst[100] = "Hello, World!";

    strncpy(dst, s, 5);
    printf("dst[%s]\n", dst);  // dst[Goood, World!]

    return 0;
}
