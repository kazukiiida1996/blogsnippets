data = ','.join(['123', '456', '789'])
print(data)


data = ','.join(['123', '"456,789"', 'abc'])
print(data)
# 123,"456,789",abc


data = ','.join(['abc', 'def', 'ghi'])

with open('data.csv', 'wt', encoding='utf-8') as fout:
    fout.write(data + '\n')
    fout.write(data + '\n')
