import queue
import threading
import time


q = queue.Queue()  # 同期FIFOキューを作成


def consumer():
    """
    消費者
    """
    while True:
        item = q.get()  # キューからアイテムを取得
        if item == 'done':  # 完了の合図
            break  # ループから抜ける
        print('consumer: got', item)  # アイテムを消費
    print('consumer done')


def producer():
    """
    生産者
    """
    s = ''
    while True:
        time.sleep(1)
        s += 'a'  # アイテムを作成
        q.put(s)  # アイテムをキューに追加
        if len(s) >= 5:  # アイテムの長さがオーバーしたら
            q.put('done')  # 完了を通知
            break  # ループから抜ける
    print('producer done')


consumer_thread = threading.Thread(target=consumer)
producer_thread = threading.Thread(target=producer)
consumer_thread.start()  # スレッドを開始
producer_thread.start()  # 同上
consumer_thread.join()  # スレッドの完了を待機
producer_thread.join()  # 同上
