# optimal way if result is incllude space
nums=[5,10,-3,-1,-10,6]
n=len(nums)
hash_map=[0]*n
j=0
k=1
for i in range(0,n):
    if nums[i]>0:
        hash_map [j] = nums[i]
        j+=2
    if nums[i]<0:
        hash_map [k] = nums[i]
        k += 2
print(hash_map)