l = [3, 1, 2]
l.sort()
print(l)
# [1, 2, 3]


l = [3, 1, 2]
l.sort(reverse=True)
print(l)
# [3, 2, 1]


class Book:
    def __init__(self, price):
        self.price = price

l = [Book(3), Book(1), Book(2)]
l.sort(key=lambda book: book.price)

for book in l:
    print(book.price)
    # 1
    # 2
    # 3
    