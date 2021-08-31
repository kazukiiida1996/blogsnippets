#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "Hello, World!";

    // ナル終端まで文字を取り出す
    for (char *p = s; *p; p += 1) {
        printf("%c\n", *p);
    }

    // strlenで文字列の長さを取得してfor文を回す
    size_t len = strlen(s);
    for (size_t i = 0; i < len; i += 1) {
        printf("%c\n", s[i]);
    }

    return 0;
}
