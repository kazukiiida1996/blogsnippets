import array


arr = array.array('i')

arr.fromlist([10, 20])
arr.fromlist([3, 4])

print(arr)
# array('i', [10, 20, 3, 4])
