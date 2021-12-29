#include <stdio.h>

typedef enum {
    RICE,
    BREAD,
    MEAT,
} Food;

int main(void) {
    Food my_food;

    my_food = MEAT;

    printf("%d\n", my_food);  // 2
    
    return 0;
}
