nums=[3,2,3,3,3,3,3]
n=len(nums)
low=0
high=n-1
target=3
while low < high:
    mid=(low+high)//2
    if nums[mid]<=target:
        ub=mid
        low=mid+1
    else:
        high=mid-1

print(ub) #tc= o(logn) 