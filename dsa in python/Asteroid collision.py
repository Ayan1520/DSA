nums= [3, 2, -3]


stack=[]
n=len(nums)
for i in range(0,n):
    if nums[i]<0 :
        while len(stack)!=0 and stack[-1]>0 and abs(nums[i])>stack[-1]:
            stack.pop()
        if len(stack)!=0 or stack[-1]==abs(nums[i]):
            stack.pop()
            continue
        elif len(stack)==0 or stack[-1]<0:
            stack.append(nums[i])
    elif nums[i]>0:
        stack.append(nums[i])
    
print(stack)