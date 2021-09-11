#include <stdio.h>

int main(void) {
    const char *hello = "Hello, ";
    char dst[100];

    // 「Hello, 」の後ろに「World!」を連結する
    snprintf(dst, sizeof dst, "%sWorld!", hello);

    printf("%s\n", dst);  // Hello, World!
    return 0;
}
