nums=[1,2,3,4,4,5,6,7]
n=len(nums)
low=0
high=n-1
target=7
while low <= high:
    mid=(low+high)//2
    if nums[mid]>=target:
        lb=mid
        high=mid-1
    else:
        low=mid+1
print(lb)

    
