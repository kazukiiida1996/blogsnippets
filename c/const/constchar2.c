#include <stdio.h>

int main(void) {
    const char *s = "abc";
    s = "def";  // ok
    return 0;
}
