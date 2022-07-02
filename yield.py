def double_num(iterable):
    for i in iterable:
        yield i

for i in double_num(range(1000)):
    print(i)
