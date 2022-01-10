#include <stdio.h>

// 自作のbool型の定義
typedef enum {
    false,  // 0
    true,  // 1
} bool;

int main(void) {
    bool flag = true;
    printf("%d\n", flag);  // 1

    flag = false;
    printf("%d\n", flag);  // 0

    return 0;
}
