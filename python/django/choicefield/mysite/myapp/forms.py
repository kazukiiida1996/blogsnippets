from django import forms
from django.db import models


class FoodChoices(models.TextChoices):
    BREAD = 'bread', 'パン'
    RICE = 'rice', 'ご飯'
    FISH = 'fish', '魚'
    MEAT = 'meat', '肉'


class FoodForm(forms.Form):
    food = forms.fields.ChoiceField(
        choices=FoodChoices.choices,
        required=True,
        label='食べ物',
        # widget=forms.widgets.Select,
    )
    

class OldFoodForm(forms.Form):
    FOOD_CHOICES = (
        ('bread', 'パン'),
        ('rice', 'ご飯'),
        ('fish', '魚'),
        ('meat', '肉'),
    )

    food = forms.fields.ChoiceField(
        choices=FOOD_CHOICES,
        required=True,
        label='古い食べ物',
    )