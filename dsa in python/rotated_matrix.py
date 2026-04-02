nums=[[5,2,4],[1,2,3],[1,1,1]]
m=len(nums)
n=len(nums[0])
for i in range(n):
    k=0
    for j in range (m-1,-1,-1):
        print(nums[j][i],end=' ')
        k+=1
    print(end='\n')