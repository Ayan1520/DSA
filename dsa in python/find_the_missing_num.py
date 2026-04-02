num=[2,5,0,4]
n=len(num)
sum1=0
sum2=0
result = 0
for i in range(n):
    sum1 +=i
    sum2 +=num[i]
    result = sum2-sum1
print(num[n-1]-result)

