#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: command [file-name]\n");
        return 0;
    }

    const char *fname = argv[1];
    printf("fname = %s\n", fname);

    return 0;
}