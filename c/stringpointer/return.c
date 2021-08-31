#include <stdio.h>

const char *get(int n) {
    if (n == 0) {
        return "Hello";
    } else {
        return "World!";
    }
}

int main(void) {
    printf("%s\n", get(0));  // Hello
    printf("%s\n", get(1));  // World!
    return 0;
}
