nums=[4,5,6]
n=len(nums)
low=0
high=n-1
mini=float('-inf')
while low <= high:
    mid=(high+low)//2
    mini=nums[mid]
    if nums[mid]<nums[high]:
        mini=min(nums[mid],mini)
        high=mid-1
    else:
        low=mid+1
print(mini)
# tc = o(logn)
#sc=o(1)