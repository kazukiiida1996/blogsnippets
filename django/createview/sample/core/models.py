from django.db import models
from django.core.validators import MinLengthValidator


class Post(models.Model):
    name = models.CharField(max_length=32, help_text='投稿者名', validators=[MinLengthValidator(3, '3文字以上です')])
    content = models.TextField(max_length=1024, help_text='投稿内容')
