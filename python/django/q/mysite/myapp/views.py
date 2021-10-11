from django.shortcuts import render
from django.http import HttpResponse
from django.db.models import Q
from myapp.models import Article


def home(request):
    # 普通に使う
    articles = Article.objects.filter(Q(title__icontains='鳥')).all()
    print([a.title for a in articles])
    # ['鳥になりたい']

    # OR検索
    articles = Article.objects.filter(
        Q(title__icontains='鳥') | Q(title__icontains='猫')
    ).all()
    print([a.title for a in articles])
    # ['鳥になりたい', '猫の額ほど狭い']

    # OR検索 その2
    q = Q()
    q.add(Q(title__icontains='鳥'), Q.OR)
    q.add(Q(title__icontains='猫'), Q.OR)

    articles = Article.objects.filter(q).all()
    print([a.title for a in articles])
    # ['鳥になりたい', '猫の額ほど狭い']

    # AND検索
    articles = Article.objects.filter(
        Q(title__icontains='犬') & Q(title__icontains='棒')
    ).all()
    print([a.title for a in articles])
    # ['犬も歩けば棒に当たる']

    # AND検索 その2
    q = Q()
    q.add(Q(title__icontains='犬'), Q.AND)
    q.add(Q(title__icontains='棒'), Q.AND)

    articles = Article.objects.filter(q).all()
    print([a.title for a in articles])
    # ['犬も歩けば棒に当たる']

    # 否定
    articles = Article.objects.filter(~Q(title__icontains='犬')).all()
    print([a.title for a in articles])
    # ['鳥になりたい', '猫の額ほど狭い']

    return HttpResponse('ok')
