import array

a = array.array('B')  # unsigned char型の配列を生成

a.append(1)
a.append(2)

print(a)
# array('B', [1, 2])
