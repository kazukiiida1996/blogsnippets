import argparse


parser = argparse.ArgumentParser('mycmd', description='これはプログラムの説明です')
parser.add_argument('myarg', type=str, help='プログラムの引数です')
args = parser.parse_args()
print(args.myarg)
