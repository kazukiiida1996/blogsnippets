#include <stdio.h>

int main(void) {
    // ファイルをテキストファイルの読み込みモードで開く
    FILE *fin = fopen("text.txt", "r");
    if (!fin) {
        // NULLだった場合はエラーを出力して終了
        perror("fopen");
        return 1;
    }


    // ここにファイルの読み込みや加工処理

    // ファイルを閉じる
    fclose(fin);
    return 0;
}
