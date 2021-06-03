import os


print(os.path.dirname(__file__))
# /blogsnippets/python/pathget


print(os.path.dirname(os.path.abspath(__file__)))
# /blogsnippets/python/pathget


import os, sys


sys.path.insert(os.path.dirname(os.path.abspath(__file__)))
