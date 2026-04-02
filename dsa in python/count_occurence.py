
nums=[1,2,3,4,4,4,4,4,4,4,4,4,5,6,7]
n=len(nums)
nums.sort()
low=0
high=n-1
target=4
fc=-1
lc=-1
while low <=high:
    mid=(low+high)//2
    if nums[mid] >= target:
        fc=mid
        high=mid-1
    else:
        low=mid+1
low=0
high=n-1
while low <= high:
    mid=(low+high)//2
    if nums[mid] <= target:
        lc=mid
        low=mid+1
    else:
        high=mid-1
if fc != -1:
    count=lc-fc+1
else:
    count=0
print(count)