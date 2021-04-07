import array

arr = array.array('B')  # unsigned char型の配列を生成

arr.append(1)
arr.append(2)

print(arr)
# array('B', [1, 2])
