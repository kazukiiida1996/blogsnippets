#include <stdio.h>
#include <wchar.h>

/**
 * 自作のwcslen()関数
 * 引数wsの文字列の長さを計算してsize_tで返す
 * 
 * @param[in] ws ワイド文字列
 * 
 * @return ワイド文字列の長さ
 */
size_t my_wcslen(const wchar_t *ws) {
    const wchar_t *p = ws;

    for (; *p; p += 1) {
    }

    return p - ws;
}

int main(void) {
    const wchar_t *ws = L"こんにちは";

    size_t len = my_wcslen(ws);

    printf("%d\n", len);  // 5
    return 0;
}
