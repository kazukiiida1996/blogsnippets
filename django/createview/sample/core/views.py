from django.shortcuts import render
from django.views.generic import DetailView, CreateView
from core.models import Post
from django.urls import reverse


class PostDetail(DetailView):
    model = Post


class PostCreate(CreateView):
    model = Post
    fields = ['name', 'content']

    def get_success_url(self):
        return reverse('posts-detail', kwargs={'pk': self.object.pk})
        