# myapp/forms.py
from django import forms
from django.utils import timezone


class UserForm(forms.Form):
    "ユーザーの情報を扱うフォーム"
    name = forms.CharField(label='名前', max_length=64)
    age = forms.IntegerField(label='年齢')
    weight = forms.FloatField(label='体重')
    height = forms.FloatField(label='身長')
    registed = forms.DateTimeField(label='登録日')
    single = forms.BooleanField(label='独身')


class BookForm(forms.Form):
    "本の情報を扱うフォーム"
    title = forms.CharField(label='タイトル', max_length=64, initial='無題')
    price = forms.IntegerField(label='価格（円）', initial=2000)
    published = forms.DateTimeField(label='出版日', initial=timezone.now())


class PostForm(forms.Form):
    "掲示板への投稿情報を扱うフォーム"
    name = forms.CharField(label='名前')
    content = forms.CharField(label='内容', widget=forms.Textarea)

    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)

        self.fields['name'].initial = '匿名'
        self.fields['content'].initial = '本文なし'
