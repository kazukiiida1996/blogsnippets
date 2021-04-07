import array


arr = array.array('i', [1, 2, 3])
el = arr.pop()
print(arr)
# array('i', [1, 2])
print(el)
# 3


arr = array.array('i', [1, 2, 3])
el = arr.pop(0)
print(arr)
# array('i', [2, 3])
print(el)
# 1

