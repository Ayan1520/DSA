nums=[1,1,1,0,0,0,1,1,1,1,0]
#brute 
maxi=0
count=0
n=len(nums)
for i in range(0,n):
    if nums[i]==1:
        count=1
        for j in range(i+1,n):
            if nums[j]!=1:
                break
            else:
                count+=1
        maxi=max(maxi,count)
print(maxi)

#better
nums = [1,0,1,1,0,1,1,1,1]
n=len(nums)
stack=[]
i=0
count=0
maxi=0
for num in nums:
    if num==1:
        stack.append(1)
        maxi=max(maxi,len(stack))
    else:
        stack.clear()
print(maxi)

#optimal
nums= [0,0,0,0]
maxi=0
count=0
n=len(nums)
for i in range(0,n):
    if nums[i]!=1 :
        maxi=max(maxi,count)
        count=0
    else:
        count+=1
maxi=max(maxi,count)
print(maxi)