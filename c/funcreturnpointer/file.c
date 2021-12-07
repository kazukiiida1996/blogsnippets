#include <stdio.h>

// FILEポインタを返す関数
FILE *open_read_file(const char *fname) {
    return fopen(fname, "r");
}

int main(void) {
    // ファイルを開く
    FILE *fp = open_read_file("./file.c");
    if (!fp) {
        return 1;  // ファイルを開くのに失敗した
    }

    fclose(fp);  // ファイルを閉じる

    return 0;
}
