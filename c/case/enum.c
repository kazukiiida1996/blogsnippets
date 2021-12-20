#include <stdio.h>

enum {
    ONE = 1,
    TWO = 2,
};

int main(void) {
    switch (ONE) {
    case ONE:
        puts("1です");
        break;
    case TWO:
        puts("2です");
        break;
    }
    
    return 0;
}
