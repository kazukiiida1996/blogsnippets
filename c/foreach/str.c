#include <stdio.h>

typedef struct {
    size_t len;
    const char *buf;
} String;

#define foreach_string(i, str) \
    for (size_t i = 0; i < str.len; i += 1)

int main(void) {
    String s = {5, "Hello"};

    foreach_string(i, s) {
        printf("%c\n", s.buf[i]);
    }

    return 0;
}
