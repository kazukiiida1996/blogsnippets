#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[] = "Good";
    const char *s2 = "Good";
    int result = strcmp(s1, s2);  // s1とs2を比較する
    printf("%d\n", result);  // 0

    char s3[] = "Good";
    const char *s4 = "Nice";
    result = strcmp(s3, s4);  // s3とs4を比較する
    printf("%d\n", result);  // -7
    return 0;
}
