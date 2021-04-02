import argparse


parser = argparse.ArgumentParser('mycmd', description='これはサンプルプログラムです。')
parser.add_argument('words', nargs='+', help='単語のリストです。')
parser.add_argument('-j', '--join', type=str, help='単語を連結します')
parser.add_argument('--upper', action='store_true', help='単語を大文字にします')
args = parser.parse_args()

words = args.words
if args.upper:
    words = [w.upper() for w in words]

if args.join:
    result = args.join.join(words)
    print(result)
    # $ python upperjoin.py arg1 arg2 --upper --join :
    # ARG1:ARG2
else:
    print(words)
