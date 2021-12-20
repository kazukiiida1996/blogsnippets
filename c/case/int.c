#include <stdio.h>

int main(void) {
    int n = 2;

    switch (n) {
    case 1:
        puts("1です");
        break;
    case 2:
        puts("2です");
        break;
    default:
        puts("1でも2でもありません");
        break;
    }
    
    return 0;
}
