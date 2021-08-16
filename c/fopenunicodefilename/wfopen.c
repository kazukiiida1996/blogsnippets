#include <windows.h>
#include <stdio.h>

int main(void) {
    const char *path = "日本語.txt";  // マルチバイト文字列なファイル名

    // マルチバイト文字列をワイド文字列に変換する
    size_t buflen = MultiByteToWideChar(CP_UTF8, 0, path, -1, NULL, 0);
    wchar_t *wpath = calloc(buflen + 1, sizeof(wchar_t));
    if (MultiByteToWideChar(CP_UTF8, 0, path, -1, wpath, buflen) == 0) {
        free(wpath);
        return NULL;
    }

    // ファイルを読み込みモードで開く
    FILE *fp = _wfopen(wpath, L"r");
    if (!fp) {
        perror("_wfopen");
        return 1;
    }

    printf("fp[%p]\n", fp);  // ファイルポインタの値を出力
    fclose(fp);  // ファイルをクローズ
    return 0;
}
