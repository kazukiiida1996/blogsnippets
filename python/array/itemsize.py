import array


arr1 = array.array('B')  # usigned char (1バイト)
print(arr1.itemsize)
# 1

arr2 = array.array('i')  # signed int (2バイト ~ 4バイト)
print(arr2.itemsize)
# 4
