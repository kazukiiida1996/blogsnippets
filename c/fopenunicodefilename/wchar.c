#include <windows.h>
#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");  // ロケールの設定

    const char *s = "日本語";  // マルチバイト文字列

    // sのワイド文字列として長さを得る
    size_t buflen = MultiByteToWideChar(CP_UTF8, 0, s, -1, NULL, 0);

    // ワイド文字列のためのバッファを確保する
    wchar_t *ws = calloc(buflen + 1, sizeof(wchar_t));

    // sをワイド文字列に変換してバッファに保存する
    if (MultiByteToWideChar(CP_UTF8, 0, s, -1, ws, buflen) == 0) {
        free(ws);
        return 1;
    }

    // ワイド文字列の出力
    // 端末によっては正しく表示されない
    wprintf(L"[%s]\n", ws);

    free(ws);
    return 0;
}
