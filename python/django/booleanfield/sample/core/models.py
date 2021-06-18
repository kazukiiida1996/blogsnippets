from django.db import models


class Book(models.Model):
    is_used = models.BooleanField(help_text='中古ならTrue')


class Cloth(models.Model):
    is_used = models.BooleanField(default=True, help_text='中古ならTrue')


class Camera(models.Model):
    IS_USED_CHOICES = (
        (False, '新品'),
        (True, '中古'),
    )
    is_used = models.BooleanField(choices=IS_USED_CHOICES, help_text='中古ならTrue')


class Hat(models.Model):
    is_used = models.BooleanField(null=True, blank=True, help_text='中古ならTrue')
