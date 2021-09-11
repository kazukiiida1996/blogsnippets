#include <stdio.h>
#include <string.h>
#include <assert.h>

/**
 * 安全性を高めたstrcat
 * ライセンスはMIT
 */
char *safe_strcat(char *dst, size_t dstsz, const char *str) {
    if (!dst || !dstsz || !str) {
        return NULL;
    }

    size_t len = strlen(dst);
    char *p = dst + len;
    char *end = dst + dstsz - 1;

    for (; p < end && *str; ) {
        *p++ = *str++;
    }

    *p = '\0';

    return dst;
}

int main(void) {
    // 以下、safe_strcat()のテストケース
    char s1[100] = "Hello, ";
    assert(safe_strcat(s1, sizeof s1, "World!") == s1);
    assert(!strcmp(s1, "Hello, World!"));

    char s2[2] = "H";
    assert(safe_strcat(s2, sizeof s2, "World!") == s2);
    assert(!strcmp(s2, "H"));    

    char s3[10] = "Hello, ";
    assert(safe_strcat(s3, sizeof s3, "World!") == s3);
    assert(!strcmp(s3, "Hello, Wo"));    

    assert(safe_strcat(NULL, 100, "World!") == NULL);
    assert(safe_strcat("Hello", 0, "World!") == NULL);
    assert(safe_strcat("Hello", 100, NULL) == NULL);
    assert(safe_strcat(NULL, 0, NULL) == NULL);

    return 0;
}
