#include <stdio.h>
#include <string.h>
#include <assert.h>

/**
 * 自作strcmp
 * LICENSE: MIT
 */
int my_strcmp(const char *s1, const char *s2) {
    size_t s1len = strlen(s1);
    size_t s2len = strlen(s2);

    if (s1len > s2len) {
        return 1;
    } else if (s1len < s2len) {
        return -1;
    }

    for (; *s1 && *s2; s1 += 1, s2 += 1) {
        int dif = *s1 - *s2;
        if (dif < 0) {
            return -1;
        } else if (dif > 0) {
            return 1;
        }
    }
    return 0;
}

int main(void) {
    assert(my_strcmp("Hello", "Hello") == strcmp("Hello", "Hello"));
    assert(my_strcmp("Hello", "World") == strcmp("Hello", "World"));
    assert(my_strcmp("World", "Hello") == strcmp("World", "Hello"));
    assert(my_strcmp("Hige", "Hoge") == strcmp("Hige", "Hoge"));
    assert(my_strcmp("Hige", "Hi") == strcmp("Hige", "Hi"));
    assert(my_strcmp("Hi", "Hige") == strcmp("Hi", "Hige"));
    return 0;
}
