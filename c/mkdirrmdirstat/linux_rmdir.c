#include <stdio.h>
#include <unistd.h>

int main(void) {
    if (rmdir("linux_dir") == 0) {
        puts("ディレクトリを削除しました。");
        return 0;
    } else {
        perror("rmdir");
        return 1;
    }
}
