#include <stdio.h>

// NULL番兵がいるポインタ配列を回すマクロ
#define foreach_ptr_array(i, ary) \
    for (size_t i = 0; ary[i]; i += 1)

int main(void) {
    const char *pary[] = {
        "Cat", "Dog", "Bird", NULL,
    };

    foreach_ptr_array(i, pary) {
        printf("%s\n", pary[i]);
    }

    return 0;
}
