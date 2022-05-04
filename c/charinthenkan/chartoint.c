#include <stdio.h>

/**
 * charの数字をintに変換する 
 * 変換できない場合は-1を返す
 * 
 * @param[in] {char} c 数字
 * @return {int} 変換した整数
 */
int chartoint(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    return -1;
}

int main(void) {
    printf("%d\n", chartoint('a'));  // -1
    printf("%d\n", chartoint('0'));  // 0
    printf("%d\n", chartoint('1'));  // 1
    printf("%d\n", chartoint('2'));  // 2
    return 0;
}
