#include <stdio.h>

void show_bits(int var) {
    int nbytes = sizeof(var);
    int nbits = nbytes * 8;

    printf("%4d -> ", var);

    for (int i = nbits - 1; i >= 0; i -= 1) {
        int n = var >> i;
        if (n & 1) {
            putchar('1');
        } else {
            putchar('0');
        }
        if (i > 0 && i % 4 == 0) {
            putchar(' ');
        }
    }
    puts("");
}

int main(void) {
    // 右シフト
    int n = 8;
    show_bits(n);

    n = n >> 1;
    show_bits(n);


    n = 8;
    show_bits(n);

    n = n >> 2;
    show_bits(n);
    

    n = 8;
    show_bits(n);

    n = n >> 3;
    show_bits(n);
    

    // 左シフト
    n = 8;
    show_bits(n);

    n = n << 1;
    show_bits(n);


    n = 8;
    show_bits(n);

    n = n << 2;
    show_bits(n);

    // 代入
    n = 8;

    n >>= 1;
    show_bits(n);

    n <<= 2;
    show_bits(n);

    return 0;
}
