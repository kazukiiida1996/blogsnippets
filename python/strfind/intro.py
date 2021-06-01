s = 'Hello, Cat Cat!'

print('Cat' in s)  # in演算子でCatがsに含まれるか判定
# True

print(s.find('Cat'))  # find()でCatがsに含まれるか前方から検索
# 7

print(s.rfind('Cat'))  # rfind()でCatがsに含まれるか後方から検索
# 11

print(s.count('Cat'))  # count()でCatがsに何個含まれるかカウント
# 2

import re

print(re.search(r'Cat', s))  # 正規表現でCatを検索
# <re.Match object; span=(7, 10), match='Cat'>

print(re.findall(r'Cat', s))  # 正規表現で全てのCatを検索
# ['Cat', 'Cat'] 

print(re.finditer(r'Cat', s))  # 正規表現で全てのCatを検索しイテレーターを取得
# <callable_iterator object at 0x7fb5f1865f40>
