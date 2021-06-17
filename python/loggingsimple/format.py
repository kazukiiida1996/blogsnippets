import logging


logging.basicConfig(
    format='%(levelname)s: %(name)s: %(asctime)s: %(pathname)s: %(funcName)s: %(lineno)d行目: %(message)s'
)

logging.error('エラーです')
# ERROR: root: 2021-01-23 01:23:45,678: /blogsnippets/python/loggingsimple/format.py: <module>: 8行目: エラーです
