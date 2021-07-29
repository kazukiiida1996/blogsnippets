from django.shortcuts import render
from blog.models import BlueArticle, GreenArticle, YellowArticle, RedArticle, PurpleArticle


def blue(request):
    article = BlueArticle.objects.first()
    context = {
        'article': article,
    }
    return render(request, 'blog/blue.html', context)


def green(request):
    article = GreenArticle.objects.first()
    context = {
        'article': article,
    }
    return render(request, 'blog/green.html', context)


def yellow(request):
    article = YellowArticle.objects.first()
    context = {
        'article': article,
    }
    return render(request, 'blog/yellow.html', context)


def red(request):
    article = RedArticle.objects.first()
    context = {
        'article': article,
    }
    return render(request, 'blog/red.html', context)


def pink(request):
    article = RedArticle.objects.first()
    context = {
        'article': article,
    }
    return render(request, 'blog/pink.html', context)


def purple(request):
    article = PurpleArticle.objects.first()
    context = {
        'article': article,
    }
    return render(request, 'blog/purple.html', context)
