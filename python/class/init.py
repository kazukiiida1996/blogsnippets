class Animal:
    def __init__(self):
        self.name = 'Pochi'

animal = Animal()
print(animal.name)
# Pochi


class Animal:
    def __init__(self, name):
        self.name = name

animal = Animal('Pochi')
print(animal.name)
# Pochi
