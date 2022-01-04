#include <stdio.h>

int main(void) {
    // 外側のfor文
    for (int i = 0; i < 2; i += 1) {
        // 内側のfor文
        for (int j = 0; j < 4; j += 1) {
            if (j == 2) {
                continue;  // 内側のfor文のみに作用する
            }            
            printf("%d\n", j);
        }
    }

    return 0;
}
