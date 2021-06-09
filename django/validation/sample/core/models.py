from django.db import models


class Post(models.Model):
    name = models.CharField(max_length=32)
    content = models.TextField(max_length=1024)
