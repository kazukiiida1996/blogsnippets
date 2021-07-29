from blog.models import BlueArticle
from django.utils import timezone


BlueArticle.objects.create(
    title='青い記事',
    created=timezone.now(),  # 手動でDateTimeFieldを初期化
)


from blog.models import GreenArticle


GreenArticle.objects.create(
    title='緑色の記事',
)


from blog.models import YellowArticle


YellowArticle.objects.create(
    title='黄色の記事',
)


from blog.models import RedArticle


RedArticle.objects.create(
    title='赤い記事',
)


from blog.models import PurpleArticle


PurpleArticle.objects.create(
    title='紫の記事',
)

