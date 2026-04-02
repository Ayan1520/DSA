candidates = [10,1,2,7,6,1,5]
candidates.sort()
target = 8
result=[]
n=len(candidates)
def comsum(idx,subset,sum):

    if sum==target:
        result.append(subset.copy())
        return 
    if sum>target or idx>=n:
        return 
    subset.append(candidates[idx])
    sum=sum+candidates[idx]
    comsum(idx+1,subset,sum)
    e=subset.pop()
    sum=sum-e
    i=idx+1
    while i<n and candidates[i]==candidates[i-1]:
        i+=1
    comsum(i,subset,sum)
    return result
print(comsum(0,[],0))