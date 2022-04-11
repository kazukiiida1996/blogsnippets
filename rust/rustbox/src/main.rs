struct Point {
    x: i32,
    y: i32,
}

fn main() {
    // Boxを使ってPointをヒープに確保する
    let p0: Box<Point> = Box::new(Point {
        x: 1,
        y: 2,
    });

    println!("{} {}", p0.x, p0.y);  // 1 2

    // 変更可能（ミュータブル）なBox
    let mut p1: Box<Point> = Box::new(Point {
        x: 1,
        y: 2,
    });

    p1.x += 10;
    p1.y += 10;

    println!("{} {}", p1.x, p1.y);  // 11 12

    // 別のBoxへの代入
    let p2: Box<Point> = Box::new(Point {
        x: 1,
        y: 2,
    });
    let p3: Box<Point> = p2;  // ムーブ

    // println!("{} {}", p2.x, p2.y);  // p2はムーブされているので使えない
    println!("{} {}", p3.x, p3.y);  // 1 2

    // i32とBox
    let i: Box<i32> = Box::new(123);

    println!("{}", i);  // 123

    // 配列とBox
    let ary: Box<[i32; 3]> = Box::new([1, 2, 3]);

    for el in ary.iter() {
        println!("{}", el);
        // 1
        // 2
        // 3
    }

    // StringとBox
    // Stringはデフォルトで可変長になっているためヒープにする必要はあまりない
    let mut s0: Box<String> = Box::new(String::from("abc"));
    let mut s1: String = String::from("def");

    s0.push_str("123");
    s1.push_str("123");

    println!("{}", s0);  // abc123
    println!("{}", s1);  // def123
}
