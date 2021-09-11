#include <stdio.h>
#include <string.h>

int main(void) {
    char s[100] = "Hello, ";

    strcat(s, "World!");  // 「Hello, 」の後ろに「World!」を連結

    printf("%s\n", s);  // Hello, World!

    return 0;
}
