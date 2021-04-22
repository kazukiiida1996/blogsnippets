# ここからfunc1のaは参照できない

def func1():
    a = 1
    # ここからはaを参照できる

# ここからfunc1のaは参照できない

def func2():
    # ここからfunc1のaは参照できない
    pass
