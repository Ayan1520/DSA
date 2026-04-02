# method1

nums=[1,1,2,2,3,4,5]
freq={}
for i in range(0,len(nums)):
    if nums[i] in freq:
        freq[nums[i]]+=1
    else:
        freq[nums[i]]=1
print(freq)

# method 2

nums=[1,1,2,2,3,4,5]
freq={}
for i in range(0,len(nums)):
    freq[nums[i]]=freq.get(nums[i],0)+1
print(freq)

