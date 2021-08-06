#include <stdio.h>

int main(void) {
    const char *s = "abc";
    s[0] = 'A';  // error: assignment of read-only location '*s'
    return 0;
}
