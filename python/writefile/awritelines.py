with open('file.txt', 'w') as fout:
    fout.write('これが最初に書き込まれます。\n')
    # これが最初に書き込まれます。
    
with open('file.txt', 'a') as fout:
    fout.writelines(['これは\n', '追記\n', 'しました。\n'])
    # これが最初に書き込まれます。
    # これは
    # 追記
    # しました。