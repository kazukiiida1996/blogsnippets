import array


arr = array.array('i')

arr.insert(0, 10)
arr.insert(0, 20)

print(arr)
# array('i', [20, 10])
