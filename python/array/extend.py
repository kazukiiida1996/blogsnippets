import array


arr = array.array('i')

arr.extend([10, 20])
arr.extend([3, 4, 5])

print(arr)
# array('i', [10, 20, 3, 4, 5])


arr1 = array.array('i', [1, 2])
arr2 = array.array('i', [1, 2, 3])

arr1.extend(arr2)
print(arr1)
# array('i', [1, 2, 1, 2, 3])
