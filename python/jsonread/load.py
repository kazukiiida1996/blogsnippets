import json


with open('data.json', 'rb') as fin:
    d = json.load(fin)  # ファイルオブジェクトfinをデコードする

print(d)
# {'a': 1, 'b': 2}


with open('data.json', 'rb') as fin:
    d = json.load(fin)  # ファイルオブジェクトfinをデコードする
    print(type(d))
    # <class 'dict'>


with open('data.json', 'rb') as fin:
    d = json.load(fin)  # ファイルオブジェクトfinをデコードする

for k, v in d.items():
    print(k, v)
    # a 1
    # b 2
