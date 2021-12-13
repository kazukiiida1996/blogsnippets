#include <stdio.h>
#include <direct.h>

int main(void) {
    if (rmdir("win_folder") == 0) {
        puts("フォルダを削除しました。");
        return 0;
    } else {
        perror("rmdir");
        return 1;
    }
}
