nums=[[5,2,4],[1,2,3],[1,1,1],[2,3,4]]
m=len(nums)
n=len(nums[0])

for i in range(0,m):
    for j in range(0,n):
        if j < i:
            print ('*',end=' ')
        else :
            print(nums[i][j],end=' ')
    print(end='\n')