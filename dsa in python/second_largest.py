#better 
nums=[55,32,-97,99,3,67]
n=len(nums)
index=float("-inf")
second_largest=float("-inf")
for i in range(0,n):
    if nums[i]>index:
        index=nums[i]
for j in range(0,n):
    if nums[j]>second_largest and nums[j]!=index:
        second_largest=nums[j]
print(second_largest)

#optimal
nums=[55,32,-97,99,3,67]
n=len(nums)
index=float("-inf")
second_largest=float("-inf")
for i in range(0,n):
    if nums[i]>index:
        second_largest=index
        index=nums[i]
    elif nums[i]>second_largest and nums[i]!=index:
        second_largest=nums[i]
print(second_largest)
