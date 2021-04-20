if type(1) in (int, str):
    print('intかstrかのどちらかです')
    # intかstrかのどちらかです

if type('Good') in (int, str):
    print('intかstrかのどちらかです')
    # intかstrかのどちらかです

if type([1, 2, 3]) not in (int, str):
    print('intとstrのどちらでもありません')
    # intとstrのどちらでもありません
