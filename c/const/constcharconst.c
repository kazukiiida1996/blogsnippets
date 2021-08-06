#include <stdio.h>

int main(void) {
    const char *const s = "abc";
    s = "def";  // error: assignment of read-only variable 's'
    return 0;
}
