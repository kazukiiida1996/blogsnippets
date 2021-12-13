#include <stdio.h>
#include <sys/stat.h>

int main(void) {
    if (mkdir("linux_dir",
                S_IRUSR | S_IWUSR | S_IXUSR |
                S_IRGRP | S_IWGRP | S_IXGRP |
                S_IROTH | S_IWOTH | S_IXOTH) == 0) {
        puts("ディレクトリを作成しました。");
        return 0;
    } else {
        perror("mkdir");
        return 1;
    }
}
