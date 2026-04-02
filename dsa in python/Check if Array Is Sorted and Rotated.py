nums = [3,7,5,1,2]
n=len(nums)
count=0
for i in range(0,n-1):
    if nums[i]>nums[i+1]:
        count+=1
if nums[n-1]<nums[i]:
    count+=1
if count<=1:
    print(True)
else:
    print(False)



    