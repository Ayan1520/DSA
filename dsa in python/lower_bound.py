nums=[1,2,3,4,5,6,7,8,9]
n=len(nums)
low=0
high=n-1
target=7
while low <= high:
    mid=(high+low)//2
    if nums[mid]>=target:
        lb=mid
        high=mid-1
    else:
        low=mid+1
print(mid)