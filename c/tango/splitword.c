#include <stdio.h>
#include <string.h>

int main(void) {
    const char *str = "cat dog  bird";
    int m = 0;

    for (const char *p = str; *p; p += 1) {
        switch (m) {
        case 0:
            if (*p == ' ') {
                m = 10;
                putchar('\n');
            } else {
                putchar(*p);
            }
            break;
        case 10:
            if (*p == ' ') {
                // pass
            } else {
                m = 0;
                p -= 1;
            }
            break;
        }
    }

    return 0;
}