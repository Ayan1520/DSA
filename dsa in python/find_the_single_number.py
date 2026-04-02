ans=[1,1,3,4,5,6,6,5]
dict={}
for nums in ans:
    dict[nums]=dict.get(nums,0)+1
for k,v in dict.items():
    if v==1:
        print(k)
print(dict) #tc=o(n) #sc=o(n)

# optimal 
# n=0
# for nums in ans:
#     n=n^nums
# print(n)