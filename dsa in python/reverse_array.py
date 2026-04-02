nums=[1,2,3,4,5]
# i=0
# n=len(nums)
# while n//2!=i:
#     nums[i],nums[n-i-1]=nums[n-i-1],nums[i]
#     i+=1
# print(nums)  using while loop

# using recurison 
def fun(nums,left,right):
    if left>=right:
        return
    nums[left],nums[right]=nums[right],nums[left]
    fun(nums,left+1,right-1)
fun(nums,2,4)
print(nums)