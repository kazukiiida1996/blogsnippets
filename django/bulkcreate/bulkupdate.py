from core.models import Article


objs = [
    Article.objects.create(title='article 1'),
    Article.objects.create(title='article 2'),
]

objs[0].title = '記事 1'
objs[1].title = '記事 2'

Article.objects.bulk_update(objs, ['title'])
