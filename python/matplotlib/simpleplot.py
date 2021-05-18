import matplotlib.pyplot as plt
import numpy as np


x = np.arange(0, 100)  # 0から100の範囲で1刻みで作成
y = np.arange(0, 100)  # 同上

plt.plot(x, y)  # グラフを描画
plt.show()  # グラフを表示
