#include <stdio.h>

struct Animal {
    int age;
    char name[40];
};

int main(void) {
    struct Animal cat = {20, "Tama"};   
    struct Animal *ptr = &cat;

    printf("ptr->age[%d] ptr->name[%s]\n", ptr->age, ptr->name);
    // ptr->age[20] ptr->name[Tama]
    
    return 0;
}
