#include <iostream>

// 車を表現するクラス
class Car {
public:
    int speed = 0;  // 車のスピードを表す変数

    // クラスの関数（メソッド）
    void speed_up() {
        speed += 2;
    }
};

int main() {
    auto car = Car();
    
    car.speed_up();
    std::cout << "speed: " << car.speed << std::endl;
    // speed: 2

    return 0;
}
