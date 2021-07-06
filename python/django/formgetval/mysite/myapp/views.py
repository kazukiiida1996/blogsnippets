# myapp/views.py
from django.shortcuts import render
from django.http import HttpResponse
from myapp.forms import BookForm


def home(request):
    # GETメソッドを処理する
    if request.method == 'GET':
        form = BookForm()  # フォームを作成して
        context = { 'form': form }  # コンテキストに保存して
        return render(request, 'myapp/home.html', context)  # 描画

    # POSTメソッドを処理する
    elif request.method == 'POST':
        form = BookForm(request.POST)  # POSTデータをフォームに保存する
        if not form.is_valid():  # バリデーションを行う
            # データが不正だったらフォームを再描画する
            context = { 'form': form }
            return render(request, 'myapp/home.html', context)

        # ↓がフォームから値を取得している所
        title = form.cleaned_data['title']
        description = form.cleaned_data['description']

        # 値を元にレスポンスを生成する
        return HttpResponse(f'{title}: {description}')

    # 未対応のメソッド
    else:
        return HttpResponse('不正なメソッドです', status=500)
