from django.shortcuts import render
from django.http import HttpResponse
from myapp.forms import FoodForm


def home_view(request):
    if request.method == 'GET':
        return render(request, 'myapp/home.html', {
            'form': FoodForm(),
        })
    elif request.method == 'POST':
        form = FoodForm(request.POST)
        if not form.is_valid():
            return render(request, 'myapp/home.html', {
                'form': form,
            })

        food = form.cleaned_data['food']
        return HttpResponse(food)


from myapp.forms import OldFoodForm


def old_home_view(request):
    if request.method == 'GET':
        return render(request, 'myapp/home.html', {
            'form': OldFoodForm(),
        })
    elif request.method == 'POST':
        form = OldFoodForm(request.POST)
        if not form.is_valid():
            return render(request, 'myapp/home.html', {
                'form': form,
            })

        food = form.cleaned_data['food']
        return HttpResponse(food)


from myapp.forms import FoodChoices
from django.http import HttpResponse


def enum_view(request):
    html = f'{FoodChoices.BREAD.name}: {FoodChoices.BREAD.value}, {FoodChoices.BREAD.label}<br />'
    html += f'{FoodChoices.RICE.name}: {FoodChoices.RICE.value}, {FoodChoices.RICE.label}<br />'
    return HttpResponse(html)

