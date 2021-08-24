#include <stdio.h>

typedef struct {
    int speed;  // 車のスピードを表す変数
} Car;

// Carの関数
void car_speed_up(Car *this) {
    this->speed += 2;
}

int main(void) {
    Car car = {0};

    car_speed_up(&car);
    printf("speed: %d\n", car.speed);
    // speed: 2

    return 0;
}
