# brute force
nums=[5,9,1,10,4,15,6,3]
n=len(nums)
target=14
# for j in range(n-1,-1,-1):
#     for i in range (0,j-1):
#         if nums[i]+nums[j]==target:
#             print(f'{i,j}') #tc=o(n^2) and sc=o(1)

#brute force

i=0
j=n-1
while j != 0:
    if i != j:
        if nums[i]+nums[j] == target :
            print(f'{i,j}')
        i+=1
    else:
        i=0
        j=j-1 #tc=o(n^2) and sc=o(1)

#optimal 

hash_map={}
for i in range(0,n):
    remaining=target - nums[i]
    if remaining in hash_map:
        print(hash_map[remaining],i)
    else:
        hash_map[nums[i]]=i # tc=o(n) sc=o(n)