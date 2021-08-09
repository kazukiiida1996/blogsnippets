#include <stdio.h>

int main(void) {
    const char s[] = "good";
    s[0] = 'f';  // error: assignment of read-only location ‘s[0]’
    return 0;
}