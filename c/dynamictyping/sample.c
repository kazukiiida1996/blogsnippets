/**
 * C言語で動的型付けを実装するサンプル
 * Created at: 2021/05/29
 */
#include <stdio.h>

// 整数オブジェクト
typedef struct {
    int value;
} Int;

// 浮動小数点オブジェクト
typedef struct {
    float value;
} Float;

// オブジェクトのタイプ
typedef enum {
    OBJ_TYPE_INT,
    OBJ_TYPE_FLOAT,
} ObjectType;

// 抽象オブジェクト
typedef struct {
    ObjectType type;
    void *real;
} Object;

/**
 * オブジェクトを出力する 
 */
void print(const Object *obj) {
    switch (obj->type) {
    case OBJ_TYPE_INT: {
        const Int *intobj = obj->real;
        printf("%d\n", intobj->value);
    } break;
    case OBJ_TYPE_FLOAT: {
        const Float *floatobj = obj->real;
        printf("%f\n", floatobj->value);
    } break;
    }
}

int main(void) {
    // IntをObjectに抽象化
    Int intobj = { 123 };
    Object obj1 = { OBJ_TYPE_INT, &intobj };

    // FloatをObjectに抽象化
    Float floatobj = { 1.23 };
    Object obj2 = { OBJ_TYPE_FLOAT, &floatobj };

    // オブジェクトを出力する
    print(&obj1);  // 123
    print(&obj2);  // 1.230000

    return 0;
}
