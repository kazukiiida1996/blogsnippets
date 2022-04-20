import sys

print(type(sys.version))
# <class 'str'>

print(sys.version)
# 3.8.10 (default, Mar 15 2022, 12:22:08)
# [GCC 9.4.0]


import sys

print(type(sys.version_info))
# <class 'sys.version_info'>

print(sys.version_info)
# sys.version_info(major=3, minor=8, micro=10, releaselevel='final', serial=0)

print('メジャー', sys.version_info[0])  # メジャー 3
print('マイナー', sys.version_info[1])  # マイナー 8
print('マイクロ', sys.version_info[2])  # マイクロ 10
print('リリースレベル', sys.version_info[3])  # リリースレベル final
print('シリアル', sys.version_info[4])  # シリアル 0


import sys

print(type(sys.hexversion))  # <class 'int'>
print(sys.hexversion)  # 50858736


import sys

print(type(sys.api_version))  # <class 'int'>
print(sys.api_version)  # 1013


import platform

v = platform.python_version()

print(type(v))
# <class 'str'>

print(v)
# 3.8.10


import platform

vt = platform.python_version_tuple()

print(type(vt))
# <class 'tuple'>

print(vt)
# ('3', '8', '10')


import platform

print('ブランチ', platform.python_branch())
# ブランチ

print('リビジョン', platform.python_revision())
# リビジョン

print('ビルド', platform.python_build())
# ビルド ('default', 'Mar 15 2022 12:22:08')

print('コンパイラ', platform.python_compiler())
# コンパイラ GCC 9.4.0
