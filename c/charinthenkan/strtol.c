#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(void) {
    long int i = strtol("123", NULL, 10);  // 10進数に変換
    printf("%ld\n", i);  // 123

    char *endptr = NULL;
    strtol("123abc", &endptr, 10);
    if (strlen(endptr)) {
        printf("変換できない文字列が含まれています: %s\n", endptr);
        // 変換できない文字列が含まれています: abc
    }

    errno = 0;
    strtol("123", NULL, 12345);
    if (errno == EINVAL) {
        perror("strtol");  // strtol: Invalid argument
    }

    errno = 0;
    strtol("123456789123456789123456789", NULL, 10);
    if (errno == ERANGE) {
        perror("strtol");  // strtol: Numerical result out of range
    }

    return 0;
}
