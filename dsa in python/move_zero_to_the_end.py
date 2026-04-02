# brute force
nums=[1,2,3,4,5,0,6,0,7,0]
n=len(nums)
# temp=[]
# for i in range(n):
#     if nums[i]!=0:
#         temp.append(nums[i])
# nz=len(temp)
# for j in range(n-nz):
#     temp.append(0)
# print(temp)

# tc = o(2n-nz)
# sc = o(n)

# optimal
j=0
for i in range (n):
    if nums[i]!=0:
        nums[i],nums[j]=nums[j],nums[i]
        j+=1
print(nums)
# tc = o(n)
# sc = o(1)

