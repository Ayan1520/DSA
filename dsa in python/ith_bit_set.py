# using left 
n=13
i=2
if(n&(1<<i))!=0:
    print(True)
else:
    print(False)

#using right
if (1&(n>>i))!=0:
    print(True)
else:
    print(False)

#set i th bit
x=(n|(1<<i))
print(x)

#Clear ith bit
x=(n&~(1<<i))
print(x)