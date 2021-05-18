import matplotlib.pyplot as plt
import numpy as np


plt.title('グラフを2つ描画する')  # タイトルの設定
plt.xlabel('X軸')  # X軸のラベル
plt.ylabel('Y軸')  # Y軸のラベル

x = np.arange(0, 10, 0.1)  # 0~10の範囲で0.1刻みで作成
sin_y = np.sin(x)  # サイン波
cos_y = np.cos(x)  # コサイン波

plt.plot(x, sin_y, label='sin')  # グラフを描画
plt.plot(x, cos_y, label='cos')  # 同上
plt.legend()  # 右上に凡例を表示する

plt.show()  # グラフの表示
