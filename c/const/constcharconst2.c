#include <stdio.h>

int main(void) {
    char const *const s = "abc";
    s = "def";  // error: assignment of read-only variable 's'
    return 0;
}
