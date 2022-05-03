#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "cat ,dog bird";
    char *tok;

    tok = strtok(str, " ");  // 半角スペース区切りでパース
    for (; tok; ) {
        puts(tok);
        tok = strtok(NULL, " ");
    }

    return 0;
}
