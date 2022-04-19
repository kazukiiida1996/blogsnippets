use std::convert::{ From, Into };

// 整数をラップした構造体
#[derive(Debug)]
struct Number {
    value: i32,
}

// Numberのfrom<i16>を実装
impl From<i16> for Number {
    fn from(x: i16) -> Self {
        Number {
            value: x as i32,  // i16をi32へキャスト
        }
    }
}

fn main() {
    // i32からu32へのキャスト
    let a: i32 = 123;  // i32は符号付き32ビット整数
    let b = a as u32;  // u32は符号なし32ビット正数

    println!("i32 to u32: {}", b);
    // i32 to u32: 123

    // 大きな型から小さな型へのキャスト
    // 変換の際に上位ビットが切り捨てられる
    let a: i16 = 30000;  // i16は符号付き16ビット整数
    let b = a as i8;  // i8は符号付き8ビット整数

    println!("a: {:b}", a);  // a: 111010100110000
    println!("b: {:b}", b);  // b: 110000

// 小さな型から大きな型へのキャスト
    // 変換の際に上位ビットが符号ビットで埋められる
    let a: i8 = -127;
    let b = a as i16;

    println!("a: {}", a);  // a: -127
    println!("b: {}", b);  // b: -127
    println!("a: {:b}", a);  // a: 10000001
    println!("b: {:b}", b);  // b: 1111111110000001

    // From/Into
    let a: i16 = 100;
    let num1 = Number::from(a);  // aからNumberに変換
    let num2: Number = a.into();  // aをNumberに変換

    println!("{:?}", num1);  // Number { value: 100 }
    println!("{:?}", num2);  // Number { value: 100 }
}
