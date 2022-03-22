import other

tama = other.Animal('Tama')
print(tama.get_name())


from other import Animal

pochi = Animal('Pochi')
print(pochi.get_name())


from other import *

taro = Animal('Taro')
print(taro.get_name())


from other import Animal as Human

bob = Human('Bob')
print(bob.get_name())


import other as another
