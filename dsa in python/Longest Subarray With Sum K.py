a = [1, 2, 3, 1, 1, 1, 1]
l=3
n=len(a)
count=0
maxi=float('-inf')
for i in range(0,n):
    prefix=[0]*(n-i)
    prefix[0]=a[i]
    for j in range(1,n-i):
        prefix[j]=prefix[j-1]+a[j+i]
    print(prefix)
    m=len(prefix)
    sum=0
    for k in range(0,m):
        if prefix[k]==l:
            sum=k+count
            maxi=max(sum,maxi)
            break
    count+=1
print(maxi)