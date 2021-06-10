from django.db import models


class Post(models.Model):
    name = models.CharField(max_length=32, help_text='投稿者名')
    content = models.TextField(max_length=1024, help_text='投稿内容')
