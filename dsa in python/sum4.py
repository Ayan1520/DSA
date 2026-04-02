arr=[-1,0,1,2,-1,-4]
n=len(arr)
arr.sort()
j=1
for i in range(0,n):
    if i >0 and arr[i]==arr[i-1]:
        continue
    for j in range(i+1,n-2):
        if j>i+1 and arr[j]==arr[j-1]:
            continue
        p=j+1
        q=n-1
        while p <q:
            if p > 2 and arr[p]==arr[p-1]:
                p+=1
                continue
            total=arr[i]+arr[j]+arr[p]+arr[q]
            if total == 0:
                print(f'{arr[i],arr[j],arr[p],arr[q]}')
                p+=1
                q-=1
            if total < 0:
                p+=1
            if total > 0:
                q-=1
            