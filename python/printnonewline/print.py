print('Hello, World!', end='')
# Hello, World!


print('Hello', end=';\n')
# Hello;


print('Hello', end=';\nWorld;\n')
# Hello;
# World;


print('One', 'Two', 'Three', sep=',')
# One,Two,Three



print('One', 'Two', 'Three', sep=',', end=';\n')
# One,Two,Three;


try:
    print('Hello', end=1)
except TypeError as e:
    print(e)
    # end must be None or a string, not int