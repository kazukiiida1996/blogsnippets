#include <stdio.h>

int main(void) {
    for (int i = 0; i < 10; i += 1) {
        if (i >= 4) {
            break;
        }

        printf("%d\n", i);
    }

    printf("ループが終了しました。\n");
    
    return 0;
}
