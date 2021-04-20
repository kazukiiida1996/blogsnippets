print(isinstance(True, int))  # True


class Animal:
    pass

class Cat(Animal):
    pass

cat = Cat()
print(isinstance(cat, Animal))  # True
print(isinstance(cat, Cat))  # True
