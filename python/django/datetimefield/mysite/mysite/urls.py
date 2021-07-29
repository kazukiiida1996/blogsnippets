from django.contrib import admin
from django.urls import path
from blog.views import blue, green, yellow, red, pink, purple

urlpatterns = [
    path('admin/', admin.site.urls),
    path('blue/', blue),
    path('green/', green),
    path('yellow/', yellow),
    path('red/', red),
    path('pink/', pink),
    path('purple/', purple),
]
