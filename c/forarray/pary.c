#include <stdio.h>

int main(void) {
    const char *ary[] = {
        "Cat",
        "Bird",
        "Dog",
        NULL,
    };

    for (int i = 0; ary[i]; i += 1) {
        printf("%s\n", ary[i]);
    }
    
    return 0;
}
