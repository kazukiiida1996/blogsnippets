from datetime import date


today = date.today()
print(type(today))
# <class 'datetime.date'>

print(today)
# 2021-04-28


from datetime import date
import time


start = date.today()
time.sleep(3)
end = date.today()
dif = end - start
print(dif)
# 0:00:00


start = date.today()
time.sleep(3)
end = date.today()
dif = end - start
print(type(dif))
# <class 'datetime.timedelta'>

print(dif.days)
# 0