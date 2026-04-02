# iternative 
# def binary_serach(nums,target):
#     nums.sort()
#     n=len(nums)
#     low=0
#     high=n-1
#     while low <= high :
#         mid = (low+high)//2
#         if nums[mid]==target:
#             return mid
#         if nums[mid]<target:
#             low+=1
#         else:
#             high-=1
# nums=[1,2,3,4,5,6,7,8,9]
# print(binary_serach(nums,9))

#recursive solution
def binary_search(nums,low,high):
    target=5
    if low >high:
        return -1
    mid=(low+high)//2
    if nums[mid]==target:
        return mid
    if nums[mid] < target:
        return binary_search(nums,mid+1,high)
    else:
        return binary_search(nums,low,mid-1)
nums=[1,2,3,4,5,6]
n=len(nums)
print(binary_search(nums,0,n-1))
# tc == o(logn)
# sc == o(1)

