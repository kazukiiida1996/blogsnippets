import argparse


parser = argparse.ArgumentParser('mycmd', description='これはサンプルプログラムです。')
parser.add_argument('words', nargs='+', help='単語のリストです。')
parser.add_argument('-j', '--join', type=str, help='単語を連結します')
args = parser.parse_args()

# $ python intro.py cat dog --join :
print(args.words)
# ['cat', 'dog']
print(args.join)
# :

print(args.join.join(args.words))
# cat:dog
