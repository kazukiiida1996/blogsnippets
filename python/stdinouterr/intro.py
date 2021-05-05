import sys


text = sys.stdin.read()  # 標準入力から読み込み
sys.stdout.write(text)  # 標準出力へ書き込み
sys.stderr.write('failed')  # 標準エラー出力へ書き込み
