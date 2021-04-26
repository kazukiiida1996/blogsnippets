from base64 import b64encode, b64decode


encoded = b64encode('本日は晴天なり'.encode())
print(encoded)
# b'5pys5pel44Gv5pm05aSp44Gq44KK'

decoded = b64decode(encoded)
print(decoded.decode())
# 本日は晴天なり
