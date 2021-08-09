#include <stdio.h>

int main(void) {
    char *s = "good";
    s[0] = 'f';  // Segmentation fault
    return 0;
}
