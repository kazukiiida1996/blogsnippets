from core.models import Article


for i in range(10000):
    Article.objects.create(title=f'{i} article')

