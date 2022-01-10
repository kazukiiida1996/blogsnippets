#include <stdio.h>
#include <stdbool.h>

bool func(void) {
    return true;  // 成功した
}

int main(void) {
    bool result = func();
    if (result) {
        puts("成功しました");
    } else {
        puts("失敗しました");
    }

    return 0;
}
