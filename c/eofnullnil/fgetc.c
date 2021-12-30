#include <stdio.h>

int main(void) {
    for (int c; (c = fgetc(stdin)) != EOF; ) {
        fputc(c, stdout);
    }

    return 0;
}
