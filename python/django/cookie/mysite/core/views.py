from django.http import HttpResponse


def home_view(request):
    response = HttpResponse('''
        <script>
            let cookies = document.cookie.split(';')
            for (const c of cookies) {
                const kv = c.split('=')
                if (kv[0].replace(/^\s+/g, '') === 'count') {
                    document.write(kv[1])
                }
            }
        </script>
    ''')
    count = request.COOKIES.get('count', 0)
    count = int(count) + 1
    response.set_cookie('count', count)
    return response


def simple_view(request):
    response = HttpResponse()
    response.set_cookie('count', 1)
    return response


