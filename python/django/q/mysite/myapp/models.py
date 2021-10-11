from django.db import models


class Article(models.Model):
    title = models.CharField(max_length=255, help_text='記事のタイトル')
    content = models.TextField(max_length=4096, help_text='記事の内容')

