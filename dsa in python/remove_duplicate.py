#brute force 
nums=[55,32,-97,99,3,3,3,4,5,6,7,67]
freq_nums={}
n = len(nums)
list=[]
for i in range(0,n):
    if nums[i] not in freq_nums:
        freq_nums[nums[i]]=0
for k in freq_nums:
    list.append(k)
print(list) 
# tc=o(n)
# sc=o(n)

#optimal
i=0
j=i+1
nums.sort()
while j<n:
    if nums[i]!=nums[j]:
        i+=1
        nums[i],nums[j]=nums[j],nums[i]
    j+=1
print(i+1)
# tc=o(n)
# sc=o(1)