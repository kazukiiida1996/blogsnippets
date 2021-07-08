# myapp/views.py
from django.shortcuts import render
from django.utils import timezone
from django.http import HttpResponse
from myapp.forms import UserForm, BookForm, PostForm


def user(request):
    if request.method == 'GET':
        # フォームを規定値で初期化
        form = UserForm(initial={
            'name': '匿名',
            'age': 20,
            'weight': 50.3,
            'height': 175.2,
            'registed': timezone.now(),
            'single': True,
        })

        context = { 'form': form }  # コンテキストにフォームを納格
        return render(request, 'myapp/user.html', context)  # 描画
    else:
        return HttpResponse('未実装')


def book(request):
    if request.method == 'GET':
        form = BookForm()  # フォームの作成
        context = { 'form': form }  # コンテキストにフォームを納格
        return render(request, 'myapp/book.html', context)  # 描画
    else:
        return HttpResponse('未実装')


def post(request):
    if request.method == 'GET':
        form = PostForm()  # フォームの作成
        context = { 'form': form }  # コンテキストにフォームを納格
        return render(request, 'myapp/post.html', context)  # 描画
    else:
        return HttpResponse('未実装')
