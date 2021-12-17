#include <stdio.h>

enum {
    ARRAY_SIZE = 5,
};

int main(void) {
    int ary[ARRAY_SIZE] = {0, 1, 2, 3, 4};  // 配列
    int index = 10;  // 添え字
    int elem = ary[index % ARRAY_SIZE];  // 添え字を配列のサイズで剰余する

    printf("%d\n", elem);
    // 0

    return 0;
}
