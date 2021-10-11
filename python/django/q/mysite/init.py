from myapp.models import Article

for a in Article.objects.all():
    a.delete()

Article.objects.create(title='鳥になりたい', content='')
Article.objects.create(title='猫の額ほど狭い', content='')
Article.objects.create(title='犬になりたい', content='')
Article.objects.create(title='犬も歩けば棒に当たる', content='')
