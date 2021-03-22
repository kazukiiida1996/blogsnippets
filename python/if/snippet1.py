name = 'cat'

if name == 'cat':
    print('nyan')
elif name == 'dog':
    print('wan')
else:
    print('gau')
# nyan


name = '太郎'

if name == '太郎':
    print('こんにちは、太郎')
else:
    print('誰ですか？')
# こんにちは、太郎


name = '太郎'

if name != '太郎':
    print('太郎を知りませんか？')
else:
    print('太郎、会いたかったです')
# 太郎、会いたかったです


names = ['花子', 'ポチ', '太郎']

if '太郎' in names:
    print('太郎が含まれています')
# 太郎が含まれています


n = 10

if n > 5:
    print('nは5より上です')
# nは5より上です


a = 5
b = 10

if a < 10 and b > 5:
    print('OK')
# OK


n = 0

if not n:
    print('nは0です')
# nは0です


a = 5
b = 10

if a < b < 15:
    print('OK')
# OK


obj = object()

if obj is None:
    print('オブジェクトはNoneです')
else:
    print('オブジェクトは存在します')
# オブジェクトは存在します


a = b = c = d = 1

if a == b and \
   c == d:
   print('OK')
# OK


a = b = c = d = 1

if (a == b and
    c == d):
    print('OK')
# OK
