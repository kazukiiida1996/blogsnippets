#if defined(_WIN32) || defined(_WIN64)
# define IS_WIN 1
#endif

#ifdef IS_WIN
# include <windows.h>
#endif

#include <stdio.h>

FILE *
open_file(const char *path, const char *mode) {
    if (!path || !mode) {
        return NULL;
    }

#ifdef IS_WIN
    // Windowsではここのコードがコンパイルされる
    // pathをワイド文字列に変換する
    size_t buflen = MultiByteToWideChar(CP_UTF8, 0, path, -1, NULL, 0);
    wchar_t *wpath = calloc(buflen + 1, sizeof(wchar_t));
    if (MultiByteToWideChar(CP_UTF8, 0, path, -1, wpath, buflen) == 0) {
        free(wpath);
        return NULL;
    }

    // modeをワイド文字列に変換する
    buflen = MultiByteToWideChar(CP_UTF8, 0, mode, -1, NULL, 0);
    wchar_t *wmode = calloc(buflen + 1, sizeof(wchar_t));
    if (MultiByteToWideChar(CP_UTF8, 0, mode, -1, wmode, buflen) == 0) {
        free(wpath);
        free(wmode);
        return NULL;
    }

    // ファイルを開く
    FILE *fp = _wfopen(wpath, wmode);
    free(wpath);
    free(wmode);
#else
    // Windows以外ではここのコードがコンパイルされる
    FILE *fp = fopen(path, mode);
#endif
    return fp;
}

int main(void) {
    FILE *fin = open_file("日本語.txt", "r");
    if (!fin) {
        perror("open_file");
        return 1;
    }

    printf("fin[%p]\n", fin);
    fclose(fin);
    return 1;
}
