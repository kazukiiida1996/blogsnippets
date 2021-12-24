#include <stdio.h>

#ifndef IS_ANIMAL
# define DOG "dog"
#endif

int main(void) {
    printf("%s\n", DOG);
    return 0;
}

#if !defined(IS_ANIMAL)
# define DOG "dog"
#endif
