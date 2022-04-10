fn main() {
    // 要素数3の配列を0クリアする
    let ary0: [i32; 3] = [0; 3];

    println!("len is {}", ary0.len());  // len is 3
    println!("{}", ary0[0]);  // 0
    println!("{}", ary0[1]);  // 0
    println!("{}", ary0[2]);  // 0

    // 要素数3の配列を[0, 1, 2]で初期化
    let ary1: [i32; 3] = [0, 1, 2];

    println!("len is {}", ary1.len());  // len is 3
    println!("{}", ary1[0]);  // 0
    println!("{}", ary1[1]);  // 1
    println!("{}", ary1[2]);  // 2

    // 配列をfor文で回す
    let ary2: [i32; 3] = [10, 11, 12];

    for el in ary2 {
        println!("{}", el);
        // 10
        // 11
        // 12
    }

    for i in 0..ary2.len() {
        println!("{} {}", i, ary2[i]);
        // 0 10
        // 1 11
        // 2 12
    }

    // 配列の要素の参照をfor文で回す
    let ary3: [i32; 3] = [10, 11, 12];

    for el in &ary3 {
        println!("{}", el);
        // let a: i32 = el;
        // expected `i32`, found `&i32`
    }

    // 配列をiter()を使って回す
    let ary5: [i32; 3] = [1, 2, 3];

    for item in ary5.iter() {
        println!("{}", a);
        // 1
        // 2
        // 3

        // let a: i32 = item;
        // expected `i32`, found `&i32`
    }

    // 配列をiter().enumerate()を使って回す
    // 添え字と要素を同時に取り出す
    let ary6: [i32; 3] = [10, 20, 30];

    for (i, x) in ary6.iter().enumerate() {
        println!("{} {}", i, x);
        // 0 10
        // 1 20
        // 2 30
    }
    
    // ミュータブルな配列を作る
    let mut mary: [i32; 3] = [1, 2, 3];

    mary[1] = 20;
    mary[2] = 30;

    for el in mary {
        println!("{}", el);
        // 1
        // 20
        // 30
    }

    // 配列の要素を変数に展開する
    let ary4: [i32; 3] = [1, 2, 3];
    let [one, two, three] = ary4;

    println!("{} {} {}", one, two, three);
}
