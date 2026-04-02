# brute force

n=[1,2,3,4,1,2,2,2,2,2,1,1,1,1,55,5,5,5,5]
m=[1,2,3,4,5]
# for num in m:
#     count=0
#     for x in n:
#         if x==num:
#             count+=1
#     print(num,':',count)

# hashing

# hash_list=[0]*11
# for num in n:
#     hash_list[num]+=1
# for num in m:
#     if num<1 or num>10:
#         print(0)
#     else:
#         print(hash_list[num])

# dictionary
my_dict={}
x=len(n)
y=len(m)
for i in range (0,y):
    if m[i] not in my_dict:
        my_dict[m[i]]=0
for j in range(0,x):
    if n[j] in my_dict:
        my_dict[n[j]]+=1
print(my_dict)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   