def fibbo(x):
    if x==0 or x==1:
        return x
    return fibbo(x-1)+fibbo(x-2)
print(fibbo(1))