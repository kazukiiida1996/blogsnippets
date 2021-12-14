#include <stdio.h>

// int型の配列用のforeachマクロ
#define foreach_int_array(el, ary) \
    for (int i = 0, el = ary[0]; i < sizeof(ary) / sizeof(ary[0]); i += 1, el = ary[i])

int main(void) {
    int ary[] = {1, 2, 3};

    foreach_int_array(el, ary) {
        printf("%d\n", el);
    }

    return 0;
}
