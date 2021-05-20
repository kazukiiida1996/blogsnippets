# オーソドックスなモジュールのインポート
import mod

# パッケージ以下のモジュールをインポート
import animals.cat

# インポートしたモジュールに別名をつける
import mod as mymod

# fromでパッケージからモジュールをインポート
from animals import cat

# fromで複数のモジュールをインポート
from animals import cat, dog
from animals import (
    cat,
    dog,
)

# fromでモジュール内の関数をインポート
from mod import (
    func1,
    func2,
)