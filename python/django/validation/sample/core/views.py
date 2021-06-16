from django.views.generic import TemplateView
from django.views import View
from django.shortcuts import render
from django.http import HttpResponse
from core.forms import PostForm


class HomeView(View):
    template_name = 'core/home.html'

    def get(self, request):
        context = {}
        context['form'] = PostForm()
        return render(request, self.template_name, context)

    def post(self, request):
        form = PostForm(request.POST)
        if not form.is_valid():
            context = { 'form': form }
            return render(request, self.template_name, context)

        return HttpResponse('ok')


home_view = HomeView.as_view()
