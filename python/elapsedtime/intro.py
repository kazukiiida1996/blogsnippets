import time


start = time.time()  # 開始時間を取得
time.sleep(3)  # 何らかの時間のかかる処理
end = time.time()  # 終了時間を取得
dif = end - start  # 差分を計算

print(dif)
# 3.0030386447906494