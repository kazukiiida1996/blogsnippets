#include <stdio.h>

int main(void) {
    // 変数aは書き換え不可能
    const int a = 0;
    a = 1;  // error: assignment of read-only variable 'a'
    return 0;
}
