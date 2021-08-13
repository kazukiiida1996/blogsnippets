#include <stdio.h>

struct Animal {
    int age;
};

int main(void) {
    struct Animal cat = { 20 };
    struct Animal *p = &cat;

    printf("age: %d\n", p->age);  // 20

    p->age = 30;
    printf("age: %d\n", p->age);  // 30

    printf("age: %d\n", (*p).age);  // 30
    
    return 0;
}
