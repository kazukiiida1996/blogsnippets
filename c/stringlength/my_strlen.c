#include <stdio.h>

/**
 * 自作のstrlen()関数
 * 引数sの文字列の長さをsize_tで返す
 *
 * @param[in] s 文字列
 * 
 * @return 文字列の長さ
 */
size_t my_strlen(const char *s) {
    const char *p = s;

    for (; *p; p += 1) {
    }

    return p - s;
}

int main(void) {
    printf("%d\n", my_strlen("Hello"));  // 5
    return 0;
}
