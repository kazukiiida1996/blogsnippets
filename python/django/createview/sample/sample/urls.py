from django.contrib import admin
from django.urls import path
from core import views

urlpatterns = [
    path('admin/', admin.site.urls),
    path('posts/detail/<int:pk>/', views.PostDetail.as_view(), name='posts-detail'),
    path('posts/create/', views.PostCreate.as_view(), name='posts-create'),
]
