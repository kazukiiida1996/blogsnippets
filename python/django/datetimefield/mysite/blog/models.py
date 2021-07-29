from django.db import models


class BlueArticle(models.Model):
    title = models.CharField(max_length=128, help_text='記事のタイトル')
    created = models.DateTimeField(help_text='作成日')  # 記事の作成日を表現する


from django.db import models
from django.utils import timezone


class GreenArticle(models.Model):
    title = models.CharField(max_length=128, help_text='記事のタイトル')
    created = models.DateTimeField(default=timezone.now(), help_text='作成日')    


from django.db import models
from django.utils import timezone


class YellowArticle(models.Model):
    title = models.CharField(max_length=128, help_text='記事のタイトル')
    created = models.DateTimeField(default=timezone.now, help_text='作成日')    


from django.db import models


class RedArticle(models.Model):
    title = models.CharField(max_length=128, help_text='記事のタイトル')
    created = models.DateTimeField(auto_now_add=True, help_text='作成日')
    modified = models.DateTimeField(auto_now=True, help_text='更新日')


from django.db import models
from django.utils import timezone


class PurpleArticle(models.Model):
    title = models.CharField(max_length=128, help_text='記事のタイトル')
    created = models.DateTimeField(help_text='作成日')
    modified = models.DateTimeField(help_text='更新日')

    def save(self, *args, **kwargs):
        if not self.id:
            self.created = timezone.now()  # 新規作成時の時刻を保存
        self.modified = timezone.now()  # 保存されるたびに更新
        return super(PurpleArticle, self).save(*args, **kwargs)
