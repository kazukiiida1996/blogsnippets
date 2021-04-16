with open('file.txt', 'w') as fout:
    fout.write('本日は晴天なり\n')
    fout.writelines(['本日は\n', '晴天\n', 'なり\n'])
    # 本日は晴天なり
    # 本日は
    # 晴天
    # なり
