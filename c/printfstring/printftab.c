#include <stdio.h>

int main(void) {
    const char *hw = "Hello, World!";

    printf("%s\t%s\n", hw, hw);
    // Hello, World!    Hello, World!
    
    return 0;
}
