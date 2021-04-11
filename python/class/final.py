class Animal:
    def __init__(self, name, age):
        self.name = name  # 名前
        self.age = age  # 年齢

    def show_name(self):
        print(self.name)

    def show_age(self):
        print(self.age)


animal = Animal('Pochi', 20)
animal.show_name()
animal.show_age()
