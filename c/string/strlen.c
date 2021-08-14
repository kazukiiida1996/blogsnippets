#include <stdio.h>
#include <string.h>

int main(void) {
    const char *s = "Good";
    size_t len = strlen(s);  // 文字列sの長さを得る
    printf("%d\n", len);  // 4
    return 0;
}
