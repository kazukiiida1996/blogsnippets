import re

target = r'aaa bbb aaa'
pattern = 'a+'
m = re.match(pattern, target)

if m:  # None以外ならパターンにマッチ
    print(m)  # <re.Match object; span=(0, 3), match='aaa'>
    print(m.group())  # aaa
                      # ↑の'aaa'は先頭の'aaa'


import re

m = re.match(r'(\w+) (\w+)', 'Tanaka Taro, Ohayo')
print(m.group())  # Tanaka Taro
print(m.group(0))  # Tanaka Taro
print(m.group(1))  # Tanaka
print(m.group(2))  # Taro


import re

m = re.match(r'(?P<one>\w+) (?P<two>\w+)', 'Tanaka Taro, Ohayo')
print(m.group('one'))  # Tanaka
print(m.group('two'))  # Taro


import re

m = re.search(r'(\d+) (\d+)', 'aaa 123 456')
print(m.group())  # 123 456


import re

li = re.findall(r'(\w+)=(\d+)', 'abc def=123 ghi jkl=223')
print(li)
# [('def', '123'), ('jkl', '223')]


import re

result = re.sub(r'\d+', '***', 'abc 123 def 223')
print(result)


import re

html = '''<ul>
<li><span>123</span></li>
<li><span>456</span></li>
<li><span>789</span></li>
</ul>
'''

s = re.sub(r'</?span>', '', html)
li = re.findall('<li>(.*)</li>', s)
print(li)
# ['123', '456', '789']


import re

m = re.match(r'.*(\d+)', 'abc123')
print(m.group())  # abc123
print(m.group(1))  # 3

m = re.match(r'.*?(\d+)', 'abc123')
print(m.group())  # abc123
print(m.group(1))  # 123


import re

m = re.match(r'.*', '123\n223\n323')
print(m.group())
# 123

m = re.match(r'.*', '123\n223\n323', re.S)
print(m.group())
# 123
# 223
# 323

