import matplotlib.pyplot as plt
import numpy as np


plt.title('サイン波を見てみる')  # グラフのタイトルを設定

x = np.arange(0, 10, 0.1)  # 0~10の範囲で0.1刻みで作成
y = np.sin(x)  # xの座標列からサインな座標列を作成

plt.plot(x, y)  # グラフの描画
plt.show()  # グラフの表示
