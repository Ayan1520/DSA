# better solution

# n=int(input('enter your number : '))
# num=n
# result=[]
# for i in range(1,num//2+1):
    # if num%i==0:
    #     result.append(i)
# result.append(num)
# print(result)

# optimal

from math import sqrt
n=int(input('enter your number : '))
num=n
result=[]
for i in range(1,int(sqrt(num)+1)):
    if num%i==0:
        result.append(i)
        if num//i!=i:
            result.append(num//i)
result.sort()
print(result)
    