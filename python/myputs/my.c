/**
 * my モジュール
 * 
 * インポートすると puts 関数を使える
 * 
 * コンパイル例:
 *  gcc -I /usr/include/python3.5m -fPIC -Wall -shared -o my.so my.c
 */

// コンパイラのフラグ -I に Python.h のあるディレクトリを指定する必要がある
#include <Python.h> 

/**
 * my モジュールのメソッド
 * 引数の文字列を標準出力に出力してその長さを返す
 */
PyObject* my_puts(PyObject* self, PyObject* args)
{
    const char* name;

    // args をパースして name に値を保存する
    // "s" は文字列を表す
    // args を "s" でパースしろという命令
    if (!PyArg_ParseTuple(args, "s", &name))
        return NULL;

    long len = strlen(name);  // 文字列の長さを取得
    int result = puts(name);  // name を stdout に出力
    if (result == EOF) {  // 結果が失敗だったら
        len = result; // len に EOF(-1) を入れる
    }

    // 文字列の長さを返す
    // PyLong_FromLong は整数オブジェクトを生成する
    return PyLong_FromLong(len);
}

// モジュール内のメソッドを定義する
// puts がメソッド名で my_puts がメソッドの本体
// METH_VARARGS は引数の定義
// 一番最後にメソッドの説明
static PyMethodDef my_methods[] = {
    {"puts", my_puts, METH_VARARGS, "Print argument string to stdout"},
    {NULL},  // 番兵
};

// モジュールのドキュメント
#define my_doc \
    "My module is my module.\n"

// モジュールの定義
static struct PyModuleDef module =
{
    PyModuleDef_HEAD_INIT,
    "my",  // モジュール名。インポートするときに使用される名前
    my_doc,  // モジュールのドキュメント
    -1,  // モジュールのインタプリタのステートのサイズ
    my_methods  // モジュール
};

// モジュールの初期化
// PyInit_(モジュール名)になる
// 今回は my モジュールを作るので PyInit_my になる
PyMODINIT_FUNC PyInit_my(void)
{
    return PyModule_Create(&module);
}
