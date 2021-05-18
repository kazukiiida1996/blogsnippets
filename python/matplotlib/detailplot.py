import matplotlib.pyplot as plt
import numpy as np


plt.title('収入の変移')  # グラフのタイトル
plt.xlabel('時間（日）')  # X軸のラベル
plt.ylabel('収入')  # Y軸のラベル

x = np.arange(0, 100)  # 0~100の範囲で1刻みで作成
y = np.arange(0, 100)  # 同上

plt.plot(x, y)  # グラフを描画
plt.show()  # グラフを表示
