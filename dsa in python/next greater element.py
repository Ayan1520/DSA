arr=[6,8,0,1,3,9]
n=len(arr)
ans=[-1]*n
stack=[]
#right to left
for i in range(n-1,-1,-1):
    while len(stack)!=0 and stack[-1]<arr[i]:
        stack.pop()
    if len(stack)!=0:
        ans[i]=stack[-1]
    stack.append(arr[i])
print(ans)

#left to right
stack1 = [-1] * n
for i in range(n):
    j = arr[i]
    k = i + 1
    while k < n and arr[k] <= j:
        k += 1
    if k < n:
        stack1[i] = arr[k]
print(stack1)

#using stack 
arr=[6,8,0,1,3,9]
ans=[-1]*n
stack=[]

n=len(arr)
for i in range(0,n):
    while len(stack)!=0 and stack[-1][0]<arr[i]:
        val,idx=stack.pop()
        ans[idx]=arr[i]
        
    stack.append([arr[i],i])
print(stack)

                                                  