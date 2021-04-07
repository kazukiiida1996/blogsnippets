import array


arr = array.array('i')
print(arr)
# array('i')
print(len(arr))
# 0


arr = array.array('i', [1, 2, 3])
print(arr)
# array('i', [1, 2, 3])
print(len(arr))
# 3


try:
    arr = array.array('B', [-1])
except OverflowError as e:
    print(e)
    # unsigned byte integer is less than minimum
