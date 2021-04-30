import os
import threading
import time


def func1():
    time.sleep(5)
    os.environ['STATUS'] = 'stop'
    print('func1 done')


def func2():
    while True:
        time.sleep(1)
        print('func2 running')
        if os.environ.get('STATUS', 'running') == 'stop':
            break

    print('func2 done')


t1 = threading.Thread(target=func1)
t2 = threading.Thread(target=func2)

t1.start()
t2.start()
t1.join()
t2.join()
