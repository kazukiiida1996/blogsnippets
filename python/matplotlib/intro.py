import matplotlib.pyplot as plt
import numpy as np


x = np.arange(0, 10, 0.1)  # x軸の座標列を作成
y = np.sin(x)  # x軸の座標列からsinの座標列を作成
plt.plot(x, y)  # グラフを描画
plt.show()  # グラフの表示
