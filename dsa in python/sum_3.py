
#brute force


arr=[-1,0,1,2,-1,-4]
n=len(arr)


# for i in range (0,n):
#     for j in range(i+1,n):
#         for k in range(j+1,n):
#             if arr[i]+arr[j]+arr[k]==0:
#                 print(f'{arr[i],arr[j],arr[k]}')  # tc=o(n^3) #sc=o(1)
    
#better 
# my_set=set()
# for i in range(n):
#     my_set.add(arr[i])
# j=0
# while j!=n:
#     for k in range(j+1,n):
#         third=-(arr[j]+arr[k])
#         if third in my_set:
#             print(f'{arr[j],arr[k],third}')
#     j+=1

#optimal 

arr.sort()
print(arr)

for i in range(0,n-2):
     j=1
     k=n-1
     while k>j:
        total=arr[i]+arr[j]+arr[k]
        if total == 0:
            print(total,arr[j],arr[k])
            j+=1
            k-=1
        if total < 0:
            j+=1
        else:
            k-=1
        


