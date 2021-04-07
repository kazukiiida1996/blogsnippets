import array


arr = array.array('i')

arr.append(1)
arr.append(2)
arr.append(3)

print(arr)
# array('i', [1, 2, 3])


arr = array.array('B')

try:
    arr.append(-1)
except OverflowError as e:
    print(e)
    # unsigned byte integer is less than minimum
