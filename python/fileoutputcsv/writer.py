import csv

with open('data.csv', 'wt', encoding='utf-8') as fout:
    # ライター（書き込み者）を作成
    writer = csv.writer(fout)

    # ライターでデータ（リスト）をファイルに出力
    writer.writerow([111, 222, 333])
    writer.writerow(['aaa', 'bb,bb', 'ccc'])


import csv

mat = [
    [111, 222, 333],
    ['aaa', 'bb,bb', 'ccc'],
]

with open('mat.csv', 'wt', encoding='utf-8', newline='') as fout:
    # ライター（書き込み者）を作成
    writer = csv.writer(fout)

    # ライターでデータ（行列）をファイルに出力
    writer.writerows(mat)
