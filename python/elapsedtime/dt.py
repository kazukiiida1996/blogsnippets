from datetime import datetime


today = datetime.today()
print(type(today))
# <class 'datetime.datetime'>

print(today)
# 2021-04-28 00:00:00.000000


from datetime import datetime
import time


start = datetime.today()  # 開始時刻を取得
time.sleep(3)  # 何らかの処理
end = datetime.today()  # 終了時刻を取得
dif = end - start  # 差分を計算
print(dif)
# 0:00:03.003057


start = datetime.today()
time.sleep(1)
end = datetime.today()
dif = end - start
print(type(dif))
# <class 'datetime.timedelta'>

print(dif.seconds)
# 1