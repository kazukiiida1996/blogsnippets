from base64 import b64encode, b64decode


s = '本日は晴天なり'
encoded = b64encode(s.encode())
decoded = b64decode(encoded)

print(decoded)
# b'\xe6\x9c\xac\xe6\x97\xa5\xe3\x81\xaf\xe6\x99\xb4\xe5\xa4\xa9\xe3\x81\xaa\xe3\x82\x8a'

print(decoded.decode())
# 本日は晴天なり
