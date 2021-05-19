l = [3, 1, 2]
sorted_l = sorted(l)
print(sorted_l)
# [1, 2, 3]


l = [3, 1, 2]
sorted_l = sorted(l, reverse=True)
print(sorted_l)
# [3, 2, 1]


class Book:
    def __init__(self, price):
        self.price = price

l = [Book(3), Book(1), Book(2)]
sorted_l = sorted(l, key=lambda book: book.price)

for book in sorted_l:
    print(book.price)
    # 1
    # 2
    # 3
