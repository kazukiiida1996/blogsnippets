#include <stdio.h>
#include <direct.h>

int main(void) {
    if (_mkdir("win_folder") == 0) {
        puts("フォルダを作成しました。");
        return 0;
    } else {
        perror("_mkdir");
        return 1;
    }
}
