#include <stdio.h>

int main(void) {
    // 表示桁数の調整
    printf("[%20s]\n", "Hello, World!");  // [       Hello, World!]
    printf("[%.5s]\n", "Hello, World!");  // [Hello]

    // 右詰め・左詰めの指定
    printf("[%-20s]\n", "Hello, World!");  // [Hello, World!       ]
    printf("[%+20s]\n", "Hello, World!");  // [       Hello, World!]

    return 0;
}
