s = 'One and One'
n = s.count('One')
print(n)  # 2


s = 'One and One'
n = s.count('Two')
print(n)  # 0


s = 'One and One'
n = s.count('One', 3)
print(n)  # 1


s = 'One and One and One'
n = s.count('One', 3, 11)
print(n)  # 1


s = 'One and One'
try:
    s.count(None)
except TypeError as e:
    print(e)  # must be str, not NoneType
