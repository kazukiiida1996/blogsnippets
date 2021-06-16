from django.db.models import Count, Max, Min, Avg
from blog.models import Response, Evaluation


Response.objects.annotate()


Response.objects.annotate(Count('evaluation')).filter(evaluation__count__gte=2)


# 評価数の集計
for response in Response.objects.annotate(Count('evaluation')):
    print(f'投稿者名[{response.name}] 評価数[{response.evaluation__count}]')


print('-' * 80)


# 最大評価の集計
for response in Response.objects.annotate(Max('evaluation__stars')):
    print(f'投稿者名[{response.name}] 最大評価[{response.evaluation__stars__max}]')


print('-' * 80)


# 最小評価の集計
for response in Response.objects.annotate(Min('evaluation__stars')):
    print(f'投稿者名[{response.name}] 最小評価[{response.evaluation__stars__min}]')


print('-' * 80)


# 平均評価の集計
for response in Response.objects.annotate(Avg('evaluation__stars')):
    print(f'投稿者名[{response.name}] 最小評価[{response.evaluation__stars__avg}]')


print('-' * 80)


# 最大評価と最小評価の集計
for response in Response.objects.annotate(Min('evaluation__stars'), Max('evaluation__stars')):
    print(f'投稿者名[{response.name}] 最大評価[{response.evaluation__stars__max}] 最小評価[{response.evaluation__stars__min}]')


print('-' * 80)


# 集計変数のエイリアス
for response in Response.objects.annotate(max_stars=Max('evaluation__stars')):
    print(f'投稿者名[{response.name}] 最大評価[{response.max_stars}]')

