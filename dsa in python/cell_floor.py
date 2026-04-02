# floor --> equal or less than target
# cell --> equal or greater than target

nums=[1,2,3,4,4,5,6,7]
n=len(nums)
low=0
high=n-1
target=-1
floor=-1
cell=-1
while low <= high:
    mid=(low+high)//2
    if nums[mid]< target:
        floor=nums[mid]
        low=mid+1
    elif nums[mid]>=target:
        cell=nums[mid]
        high=mid-1
print(floor,cell)
# tc = o(logn)