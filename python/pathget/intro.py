import os


print(__file__)  # スクリプトのパスを参照
# /blogsnippets/python/pathget/intro.py

print(os.path.abspath(__file__))  # 絶対パスを取得
# /blogsnippets/python/pathget/intro.py

print(os.path.dirname(os.path.abspath(__file__)))  # 絶対パスでディレクトリを取得
# /blogsnippets/python/pathget

print(os.path.basename(__file__))  # ファイル名を取得
# intro.py
