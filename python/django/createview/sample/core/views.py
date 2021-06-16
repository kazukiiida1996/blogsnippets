from django.shortcuts import render
from django.views.generic import DetailView, CreateView
from core.models import Post
from django.urls import reverse
from django.http import HttpResponse


class PostDetail(DetailView):
    model = Post


class PostCreate(CreateView):
    model = Post
    fields = ['name', 'content']

    def get_success_url(self):
        return reverse('posts-detail', kwargs={'pk': self.object.pk})

    def post(self, request, *args, **kwargs):
        self.object = None
        return super().post(request, *args, **kwargs)

    def get_form(self, form_class=None):
        form = super().get_form(form_class)
        form.fields['name'].label = 'お名前'
        form.fields['content'].required = False
        return form

    def form_invalid(self, form):
        return HttpResponse('失敗しました', status=500)

    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context['message'] = 'ご自由に投稿してください。'
        return context