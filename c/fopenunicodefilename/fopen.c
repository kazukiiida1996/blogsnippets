#include <stdio.h>

int main(void) {
    FILE *fin = fopen("日本語.txt", "r");
    if (!fin) {
        perror("fopen");
        return 1;
    }

    printf("fin[%p]\n", fin);
    fclose(fin);
    return 0;
}