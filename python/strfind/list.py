lis = ['One', 'Two', 'Three']

print('Two' in lis)
# True

print('Four' in lis)
# False


lis = ['One', 'Two', 'Three']
index = lis.index('Two')
print(index)
# 1


lis = ['One', 'Two', 'Three']
try:
    lis.index('Four')
except ValueError as e:
    print(e)
    # 'Four' is not in list
