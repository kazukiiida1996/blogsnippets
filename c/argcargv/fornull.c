#include <stdio.h>

int main(int argc, char *argv[]) {
    for (char **p = argv; *p; p += 1) {
        printf("p = %s\n", *p);
    }
    return 0;
}
