# brute force
nums=[1,2,3,4,5]
n=len(nums)
k=6
k=k%n
for i in range (k):
    key=nums[n-1]
    for j in range(n-1,0,-1):
        nums[j]=nums[j-1]
    nums[0]=key
    print(nums)

# tc = o(n * k)
# sc = o(1)

# optimal
def reverse (nums,left,right):
    while left<right:
        nums[left],nums[right]=nums[right],nums[left]
        left+=1
        right-=1
reverse(nums,0,n-k)
reverse(nums,n-k,n-1)
reverse(nums,0,n-1)
print(nums)

#tc = o(n)
#sc = o(1)