s = '{:<30}'.format(10)
print(f'[{s}]')
# [10                            ]


s = '{:>30}'.format(10)
print(f'[{s}]')
# [                            10]


s = '{:^30}'.format(10)
print(f'[{s}]')
# [              10              ]


s = '[{1:<10}] [{0:>10}]'.format(10, 20)
print(s)
# [20        ] [        10]


s = '{:*^10}'.format(10)
print(s)
# ****10****

s = '{:-^10}'.format(10)
print(s)
# ----10----


s = '{:a^10}'.format(10)
print(s)
# aaaa10aaaa

s = '{:犬^10}'.format('人')
print(s)
# 犬犬犬犬人犬犬犬犬
