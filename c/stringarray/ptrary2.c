#include <stdio.h>

int main(void) {
    const char *ary[] = {
        "Hello",
        "Good",
        "World",
    };

    printf("%s\n", ary[0]);  // Hello
    printf("%s\n", ary[1]);  // Good
    printf("%s\n", ary[2]);  // World

    return 0;
}
