nums=[55,32,-97,99,3,67]
n=len(nums)
index=float("-inf")
for i in range(0,n):
    if nums[i]>index:
        index=nums[i]
print(index)
# tc=o(n)
# sc=o(1)
