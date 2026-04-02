nums=[1,2,3]
value=False
n=len(nums)
for i in range(n-1):
    if nums[i]>nums[i+1]:
        value=True
        break
if value:
    print('not sorted')
else:
    print('sorted')