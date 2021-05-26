s = 'Hello, '
result = s + 'World!'  # +演算子で結合
print(result)
# Hello, World!


s = 'Hello, '
s += 'World!'  # +=演算子で連結
print(s)
# Hello, World!


lis = ['2100', '01', '01']
s = '-'.join(lis)  # join()で結合
print(s)
# 2100-01-01


s = 'Hello'
result = '{}, World!'.format(s)  # format()で連結
print(result)
# Hello, World!


s = 'Hello'
result = f'{s}, World!'
print(result)  # f文字列で連結
# Hello, World!
