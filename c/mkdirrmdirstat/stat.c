#include <stdio.h>
#include <sys/stat.h>

int main(void) {
    struct stat st;

    if (stat("folder", &st) == 0) {
        puts("フォルダは存在します。");
    } else {
        puts("フォルダは存在しません。");
    }

    return 0;
}
