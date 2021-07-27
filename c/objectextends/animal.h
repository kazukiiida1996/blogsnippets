#pragma once

#include <stdio.h>
#include <stdlib.h>

/**
 * Catのベース（親の構造体）となるAnimal構造体
 * ageとweightの属性を持つ
 */
typedef struct {
    int age;
    double weight;
} Animal;

/**
 * イニシャライザ
 * 確保されたAnimalのメモリを引数で初期化する
 */
Animal *
Animal_Init(Animal *self, int age, double weight);

/**
 * コンストラクタ
 * Animalを動的メモリの確保で構築する
 * 内部ではイニシャライザを呼び出す
 */
Animal *
Animal_New(int age, double weight);

/**
 * デストラクタ
 * 確保されたAnimalのメモリを破棄する
 */
void
Animal_Del(Animal *self);
