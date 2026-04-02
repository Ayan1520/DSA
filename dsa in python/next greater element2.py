arr=[10,8,0,1,3,9]
n=len(arr)
stack=[]
result=[-1]*n
#method 1
for i in range(2*(n-1),-1,-1):
    while len(stack)!=0 and stack[-1]<arr[i%n]:
        stack.pop()
    if len(stack)!=0:
        result[i%n]=stack[-1]
    stack.append(arr[i%n])
print(result)

#method2
