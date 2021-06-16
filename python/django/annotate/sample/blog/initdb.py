from blog.models import Response, Evaluation


response_1 = Response.objects.create(name='太郎', content='こんにちは')
response_2 = Response.objects.create(name='マイケル', content='こんにちは')
response_3 = Response.objects.create(name='スーパーボブ', content='Hi, Guys')

Evaluation.objects.create(response=response_1, stars=3)
Evaluation.objects.create(response=response_1, stars=4)
Evaluation.objects.create(response=response_1, stars=5)
Evaluation.objects.create(response=response_1, stars=1)
Evaluation.objects.create(response=response_2, stars=2)
Evaluation.objects.create(response=response_2, stars=2)
Evaluation.objects.create(response=response_2, stars=4)
Evaluation.objects.create(response=response_3, stars=5)
