#include <stdio.h>
#include <string.h>

int main(void) {
    const char *s = "Hello";

    size_t len = strlen(s);

    printf("%d\n", len);  // 5
    return 0;
}
