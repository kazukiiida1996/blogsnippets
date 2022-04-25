#include <unistd.h>
#include <stdio.h>

int main(void) {
    long sec = 0;

    for (;;) {
        sleep(1);
        sec++;

        printf("%ld秒経過\n", sec);
    }
    
    return 0;
}
