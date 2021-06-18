from core.models import Book, Cloth, Hat


book = Book.objects.create(is_used=False)
print(book.is_used)
# False


book = Book.objects.first()
print(type(book.is_used))  # <class 'bool'>
print(book.is_used)  # False


used_books = Book.objects.filter(is_used=True).all()
print(used_books)
# <QuerySet [<Book: Book object (1)>, <Book: Book object (2)>]>


cloth = Cloth.objects.create()
print(cloth.is_used)
# True


hat = Hat.objects.first()
print(hat.is_used)
# None
