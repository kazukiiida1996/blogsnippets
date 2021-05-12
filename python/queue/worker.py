import queue
import threading


q = queue.Queue()  # 同期FIFOキューの作成


def worker():
    """
    キューのアイテムを消費するワーカー
    """
    while True:
        item = q.get()  # キューからアイテムを取得
        print('item is', item)  # アイテムを使用
        q.task_done()  # アイテムの使用完了をキューに知らせる


thread = threading.Thread(target=worker, daemon=True)  # デーモンスレッド作成
thread.start()  # スレッドを開始

# キューにアイテムを追加
q.put('nyan') 
q.put('wan')
q.put('pilolo')

q.join()  # キューのアイテムが消費されるのを待つ
