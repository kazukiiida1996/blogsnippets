import os

srcpath = './src/file.txt'  # ソースとなるファイルのパス
with open(srcpath, 'r', encoding='utf-8') as fin:
    content = fin.read()  # 中身を読み込む

dstdir = './dst'  # 保存先のディレクトリ
fname = os.path.basename(srcpath)  # ファイル名を取得
dstpath = os.path.join(dstdir, fname)  # ディレクトリ名とファイル名を合成

with open(dstpath, 'w', encoding='utf-8') as fout:
    fout.write(content)  # 書き込む
