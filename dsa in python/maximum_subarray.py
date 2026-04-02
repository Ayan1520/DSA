# brute force
num=[-2,-1,-3,-4,-1,-2,-1,-5,-4]
n=len(num)
max_sum=0
for i in range(0,n):
    sum=0
    for j in range(i,n):
        sum+=num[j]
        max_sum=max(max_sum,sum)
print(max_sum) #tc=o(n^2) #sc = o(1)

# optimal solution (kadane algorithm)
max_num=float('-inf')
total = 0
for i in range (0,n):
    total = total + num[i]
    if total < 0:
        total = 0
    max_num=max(max_num,total)
print(max_num)
