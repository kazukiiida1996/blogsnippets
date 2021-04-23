from core.models import Article


objs = []
for i in range(10):
    obj = Article(title=f'{i} article')
    objs.append(obj)

Article.objects.bulk_create(objs)
