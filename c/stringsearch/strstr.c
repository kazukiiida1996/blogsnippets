#include <stdio.h>
#include <string.h>

int main(void) {
    const char *s = "abcdefghi";

    // "def"という文字列を検索する
    const char *found = strstr(s, "def");
    if (found) {
        printf("found[%s]\n", found);
    } else {
        printf("not found\n");
    }
    // found[defghi]

    // "xyz"という文字列を検索する
    found = strstr(s, "xyz");
    if (found) {
        printf("found[%s]\n", found);
    } else {
        printf("not found\n");
    }
    // not found
    
    return 0;
}
