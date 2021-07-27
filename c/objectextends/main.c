#include <stdio.h>
#include "cat.h"

int main(void) {
    // Catをコンストラクトする
    Cat *cat = Cat_New(20, 32.1, 4);
    if (!cat) {
        return 1;
    }

    // Catの初期化された属性を見る
    printf("cat legs[%d]\n", cat->legs);

    // CatをAnimalにアップキャストすると↓のようにAnimalの属性にアクセスできる
    // これはCat構造体の先頭にAnimal構造体の変数があるため
    Animal *animal = (Animal *) cat;
    printf("cat age[%d] weight[%lf]\n", animal->age, animal->weight);

    // Catを破棄
    Cat_Del(cat);
    return 0;
}

