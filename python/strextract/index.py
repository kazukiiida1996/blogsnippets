s = 'abc123def'

print(s[0])  # 0番目の要素（a）を参照
# a

print(s[1])  # 1番目の要素（b）を参照
# b

print(s[2])  # 0番目の要素（c）を参照
# c


c = s[0]
print(type(c))
# <class 'str'>

print(s[0][0][0])
# a


c = s[-1]
print(c)
# f


s = 'abc123def'
for i in range(len(s)):
    print(s[i])

# a
# b
# c
# 1
# 2
# 3
# d
# e
# f
