#pragma once

#include <stdio.h>
#include <stdlib.h>

#include "animal.h"

/**
 * Animalを継承したCat構造体
 */
typedef struct {
    // 構造体の先頭で継承する構造体を書く
    Animal parent;

    // この属性はCat独自の属性
    int legs;
} Cat;

/**
 * イニシャライザ
 * 内部ではAnimalのイニシャライザを呼び出して構造体の初期化を行っている 
 */
Cat *
Cat_Init(Cat *self, int age, double weight, int legs);

/**
 * コンストラクタ
 * Catを動的メモリの確保で構築する
 * 内部ではイニシャライザを呼び出す
 */
Cat *
Cat_New(int age, double weight, int legs);

/**
 * デストラクタ
 * 確保されたCatのメモリを破棄する
 */
void
Cat_Del(Cat *self);
