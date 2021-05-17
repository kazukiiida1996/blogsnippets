s = 'Hello, World!'  # 文字列の作成
print(s)  # 文字列の出力
# Hello, World!

print(s[0])  # インデックスによる参照
print(s[1])  # 同上
# H
# e

print(s[2:8])  # スライスによる範囲抽出
# llo, W

s = s + " Goodbye, World!"  # 文字列同士の連結
print(s)
# Hello, World! Goodbye, World!

s = s.replace('World', 'Alice')  # 文字列の置き換え
print(s)
# Hello, Alice! Goodbye, Alice!

toks = s.split(', ')  # 文字列の分割
print(toks)
# ['Hello', 'Alice! Goodbye', 'Alice!']

s = ' | '.join(toks)  # 文字列をセパレーターで連結
print(s)
# Hello | Alice! Goodbye | Alice!