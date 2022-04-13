fn main() {
    // 成功。何もしない
    assert!(1 == 1);

    // 失敗。パニックが発生
    assert!(1 == 0);

    // 失敗。カスタムメッセージでエラーを出力
    assert!(1 == 0, "1 is 0");
    /* thread 'main' panicked at '1 is 0', src\main.rs:9:5
    note: run with `RUST_BACKTRACE=1` environment variable to display a backtrace
    error: process didn't exit successfully: `target\debug\rust_assert.exe` (exit code: 101) */

    // 成功。何もしない
    assert_eq!(1, 1);    

    // 失敗。パニックが発生
    assert_eq!(1, 0);    

    // 成功。何もしない
    assert_ne!(1, 0);    

    // 失敗。パニックが発生
    assert_ne!(1, 1);    
}
