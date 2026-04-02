nums=[[5,2,4],[1,2,3],[1,1,1]]
m=len(nums)
n=len(nums[0])
for i in range(n):
    for j in range(m):
        print(nums[j][i],end=' ')
    print(end='\n')