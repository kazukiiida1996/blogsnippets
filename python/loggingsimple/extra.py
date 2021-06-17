import logging


logging.basicConfig(format='%(asctime)-15s: %(myheader)s: %(message)s', level=logging.DEBUG)
logging.debug('デバッグです', extra={ 'myheader': 'ヘッダーです' })
# 2021-01-23 01:23:45,678: ヘッダーです: デバッグです
