import logging

logging.basicConfig(level=logging.DEBUG)  # ロギングレベルの設定

logging.debug('DEBUGです')  # DEBUG:root:DEBUGです
logging.info('INFOです')  # INFO:root:INFOです
logging.warning('WARNINGです')  # WARNING:root:WARNINGです
logging.error('ERRORです')  # ERROR:root:ERRORです
logging.critical('CRITICALです')  # CRITICAL:root:CRITICALです

try:
    raise ValueError('不正な値です')
except ValueError:
    logging.exception('例外と一緒にログを出力します')
    # ERROR:root:例外と一緒にログを出力します
    # Traceback (most recent call last):
    #   File "/blogsnippets/python/loggingsimple/log.py", line 12, in <module>
    #     raise ValueError('不正な値です')
    # ValueError: 不正な値です

logging.log(logging.DEBUG, 'DEBUGです')  # DEBUG:root:DEBUGです
logging.log(logging.INFO, 'INFOです')  # INFO:root:INFOです

print('-' * 80)

try:
    raise ValueError('不正な値です')
except ValueError:
    logging.debug('失敗しました', exc_info=True)
    # DEBUG:root:失敗しました
    # Traceback (most recent call last):
    #   File "/blogsnippets/python/loggingsimple/log.py", line 27, in <module>
    #     raise ValueError('不正な値です')
    # ValueError: 不正な値です

print('-' * 80)

logging.debug('スタックトレースです', stack_info=True)
# DEBUG:root:スタックトレースです
# Stack (most recent call last):
#   File "/blogsnippets/python/loggingsimple/log.py", line 33, in <module>
#     logging.debug('スタックトレースです', stack_info=True)

print('-' * 80)
