# brute force
nums=[4,5,1,2,3]
n=len(nums)
target=3
# for i in range(n):
#     if nums[i]==target:
#         print(i)
#         break
# tc = o(n)

# optimal 
nums=[4,5,5,5,5,1,2,3]
n=len(nums)
target=1
low=0
high=n-1
while low <= high:
    mid=(low+high)//2
    if nums[mid]==target:
        print(mid)
        break
    if nums[low]>nums[mid]:
        if nums[mid]<target<=nums[high]:
            low=mid+1
        else:
            high=mid-1
    else:
        if nums[low]<=target<nums[mid]:
            high=mid-1
        else:
            low=mid+1