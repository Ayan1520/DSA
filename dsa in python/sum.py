def func(i):
    if i==1:
        return 1
    return i+func(i-1)
print(func(3))
#  T.c=0(n)
#  s.c=0(n) because stack is full at a time