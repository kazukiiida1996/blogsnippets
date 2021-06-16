from django.db import models
from django.core.validators import MinValueValidator, MaxValueValidator


class Response(models.Model):
    """
    ブログへのレスポンス
    """
    name = models.CharField(max_length=64, help_text='投稿者名')
    content = models.TextField(max_length=512, help_text='投稿内容')


class Evaluation(models.Model):
    """
    レスポンスへの評価
    星の数(stars)で評価する
    """
    STARS_CHOICES = (
        ('☆☆☆☆☆', 5),
        ('☆☆☆☆★', 4),
        ('☆☆☆★★', 3),
        ('☆☆★★★', 2),
        ('☆★★★★', 1),
    )

    stars = models.IntegerField(
        choices=STARS_CHOICES,
        validators=[MinValueValidator(1), MaxValueValidator(5)],
        help_text='星',
    )
    response = models.ForeignKey(Response, on_delete=models.PROTECT, help_text='評価先のレス')
