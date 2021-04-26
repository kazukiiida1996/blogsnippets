from base64 import b64encode


s = '本日は晴天なり'
encoded = b64encode(s.encode())

print(encoded)
# b'5pys5pel44Gv5pm05aSp44Gq44KK'
