#include <stdio.h>
#include <string.h>

int main(void) {
    const char *s = "abcdef";  // 検索対象の文字列

    // 'c'という文字を検索
    const char *found = strchr(s, 'c');
    if (found) {
        printf("found[%s]\n", found);
    } else {
        printf("not found\n");
    }
    // found[cdef]

    // 'z'という文字を検索
    found = strchr(s, 'z');
    if (found) {
        printf("found[%s]\n", found);
    } else {
        printf("not found\n");
    }
    // not found

    return 0;
}
