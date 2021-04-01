import json


with open('data.json', 'rb') as fin:
    d = json.load(fin)  # ファイルオブジェクトをオブジェクトに変換

print(d)
# {'a': 1, 'b': 2}


s = '{"a": 1, "b": 2}'

d = json.loads(s)  # 文字列のJSONをオブジェクトに変換
print(d)
# {'a': 1, 'b': 2}
