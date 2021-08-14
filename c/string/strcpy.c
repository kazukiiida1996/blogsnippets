#include <stdio.h>
#include <string.h>

int main(void) {
    char s[100];;
    strcpy(s, "Good");  // sに"Good"をコピーする
    printf("%s\n", s);  // Good
    return 0;
}
