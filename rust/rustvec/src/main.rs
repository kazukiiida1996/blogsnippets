fn main() {
    // 空のベクタ（整数）を作る場合
    let v0: Vec<i32> = Vec::new();

    println!("{}", v0.len());  // 0

    // マクロを使って空のベクタ（整数）を作る場合
    let v1 = vec![0; 0];

    println!("{}", v1.len());  // 0

    // マクロを使ってベクタを特定の値で初期化する場合
    let v2 = vec![1, 2, 3];

    println!("len is {}", v2.len());  // 3
    println!("{}", v2[0]);  // 1
    println!("{}", v2[1]);  // 2
    println!("{}", v2[2]);  // 3

    // マクロを使って3要素のベクタを0クリアする場合
    let v3 = vec![0; 3];

    println!("len is {}", v3.len());  // 3
    println!("{}", v3[0]);  // 0
    println!("{}", v3[1]);  // 0
    println!("{}", v3[2]);  // 0

    // pushでベクタの末尾に値を追加する
    let mut v4 = vec![1, 2];

    println!("len is {}", v4.len());  // 2

    v4.push(3);

    println!("len is {}", v4.len());  // 3
    println!("{}", v4[0]);  // 1
    println!("{}", v4[1]);  // 2
    println!("{}", v4[2]);  // 3

    // popでベクタの末尾から値をポップする
    let mut v5 = vec![1, 2, 3];
    let popped = v5.pop();

    println!("len is {}", v5.len());  // 2
    println!("popped {}", popped.unwrap());  // 3

    // 空のベクタでpopを使うとNoneが返ってくる
    let mut v5_2 = vec![0; 0];
    let popped = v5_2.pop();
    if popped == None {
        println!("vector is empty!");
    }

    // ベクタをfor文で回す
    let v6 = vec![1, 2, 3];

    for el in v6 {
        println!("{}", el);
        // 1
        // 2
        // 3
    }

    // ベクタをiter()とfor文で回す
    let v7 = vec![1, 2, 3];

    for el in v7.iter() {
        println!("{}", el);
        // 1
        // 2
        // 3
    }

    // ベクタをiter()とenumerate()とfor文で回す
    let v8 = vec![1, 2, 3];
    
    for (i, el) in v8.iter().enumerate() {
        println!("{} {}", i, el);
        // 0 1
        // 1 2
        // 2 3
    }

    // 愚直に添え字で回す方法
    let v9 = vec![1, 2, 3];

    for i in 0..v9.len() {
        println!("{} {}", i, v9[i]);
    }
}
