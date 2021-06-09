from django import forms
from django.core.validators import validate_integer
from django.core.validators import MinLengthValidator
from django.core.validators import validate_comma_separated_integer_list


class MultiIDField(forms.Field):
    def to_python(self, value):
        # valueをパースしてIDのリストに変換する
        if not value:
            return []
        return value.split(',')

    def validate(self, value):
        # valueをバリデーションする
        super().validate(value)
        for id_ in value:
            validate_integer(id_)


class PostForm(forms.Form):
    name = forms.CharField(label='名前', max_length=32)
    # name = forms.CharField(label='名前', max_length=32, validators=[MinLengthValidator(limit_value=3)])
    content = forms.CharField(label='内容', widget=forms.Textarea)
    ids = MultiIDField(label='IDリスト（カンマ区切り）')
    # ids = MultiIDField(label='IDリスト（カンマ区切り）', validators=[validate_comma_separated_integer_list])

    def clean_name(self):
        # nameをバリデーションする
        name = self.cleaned_data['name']
        if len(name) < 3:
            raise forms.ValidationError('名前が短すぎます。')

        return name

    def clean(self):
        cleaned_data = super().clean()
        name = cleaned_data.get('name')
        content = cleaned_data.get('content')
        ids = cleaned_data.get('ids')

        if name is None or content is None or ids is None:
            raise forms.ValidationError('フィールドが入力されていません。')

