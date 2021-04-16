with open('file.txt', 'w') as fout:
    fout.write('これが最初に書き込まれます。\n')
    # これが最初に書き込まれます。
    
with open('file.txt', 'a') as fout:
    fout.write('これは追記しました。\n')
    # これが最初に書き込まれます。
    # これは追記しました。