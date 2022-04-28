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
    show_bits(0);
    show_bits(1);
    show_bits(8);
    show_bits(32);
    show_bits(64);
    show_bits(255);
    show_bits(256);
    return 0;
}
