# mysite/urls.py
from django.contrib import admin
from django.urls import path
from myapp import views


urlpatterns = [
    path('admin/', admin.site.urls),
    path('user/', views.user, name='user'),
    path('book/', views.book, name='book'),
    path('post/', views.post, name='post'),
]
