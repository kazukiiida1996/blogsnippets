#include <stdio.h>

// 汎用的なforeachマクロ
#define foreach_array(i, ary) \
    for (size_t i = 0; i < sizeof(ary) / sizeof(ary[0]); i += 1)

int main(void) {
    int iary[] = {1, 2, 3};

    foreach_array(i, iary) {
        printf("%d\n", iary[i]);
    }

    double dary[] = {1.2, 3.4, 5.6};

    foreach_array(i, dary) {
        printf("%lf\n", dary[i]);
    }

    return 0;
}
