import array


arr = array.array('B')

try:
    arr.insert(0, -1)
except OverflowError as e:
    print(e)
    # unsigned byte integer is less than minimum
    

arr1 = array.array('i', [1, 2])
arr2 = array.array('d', [1, 2, 3])

try:
    arr1.extend(arr2)
except TypeError as e:
    print(e)
    # can only extend with array of same kind
