import argparse


parser = argparse.ArgumentParser('mycmd', description='これはプログラムの説明です')
parser.add_argument('-m', '--myopt', action='store_true', help='プログラムのオプションです')
parser.add_argument('-a', action='store_true')
parser.add_argument('--bbb', action='store_true')
parser.add_argument('--file', type=str)
args = parser.parse_args()
print(args.myopt)
print(args.a)
print(args.bbb)
print(args.file)
