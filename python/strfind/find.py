s = 'The Cat'
index = s.find('Cat')
print(index)  # 4


s = 'The Cat'
index = s.find('Dog')
print(index)  # -1


s = 'Cat and Cat'
index = s.find('Cat', 3)
print(index)  # 8


s = 'The Cat'
try:
    s.find(None)
except TypeError as e:
    print(e)  # must be str, not NoneType
