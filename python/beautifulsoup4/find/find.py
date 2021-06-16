from bs4 import BeautifulSoup


html = '''
<div>
    <p>one</p>
    <span class="bird">two</span>
    <strong id="pig" class="dog">three</strong>
    <p key1="value1">four</p>
    <p key1="value1" key2="value2">five</p>
    <div>
        <p class="cow">six</p>
    </div>
</div>
'''


soup = BeautifulSoup(html, 'html.parser')
print(type(soup))
# <class 'bs4.BeautifulSoup'>

# 見つからなかった場合はNoneを返す

tag = soup.find('nothing')
print(tag)
# None


# nameにタグ名を指定して要素を取得する

tag = soup.find('p')
print(type(tag))  # <class 'bs4.element.Tag'>
print(tag.text)  # one

tag = soup.find(name='p')
print(tag.text)
# one

tag = soup.find('span')
print(tag.text)
# two


# attrsに属性名と属性値を指定して要素を取得する

tag = soup.find(attrs={ 'class': 'bird' })
print(type(tag))  # <class 'bs4.element.Tag'>
print(tag.text)  # two

tag = soup.find(attrs={ 'key1': 'value1', 'key2': 'value2' })
print(tag.text)
# five


# **kwargsにidとclass_を指定して要素を取得する

tag = soup.find(id='pig')
print(tag.text)
# three

tag = soup.find(class_='dog')
print(tag.text)
# three


# textに文字列を指定して要素を取得する

ns = soup.find(text='two')
print(type(ns))  # <class 'bs4.element.NavigableString'>
print(ns)  # two

def has_text(soup, text):
    return bool(soup.find(text=text))

print(has_text(soup, 'one'))  # True
print(has_text(soup, 'nothing'))  # False

# recursiveで検索深度を調整する

tag = soup.find(class_='cow', recursive=True)
print(tag.text)
# six

tag = soup.find(class_='cow', recursive=False)
print(tag)
# None

tag = soup.find('div', recursive=False)
print(tag.name)
# div
