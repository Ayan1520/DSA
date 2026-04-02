def func(i):
    if i==1 or i==0:
        return 1
    return i*func(i-1)
print(func(5))