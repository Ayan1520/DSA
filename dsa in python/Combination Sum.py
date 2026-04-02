candidates = [2,3,5]
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
    comsum(idx,subset,sum)
    e=subset.pop()
    sum=sum-e
    comsum(idx+1,subset,sum)
    return result
print(comsum(0,[],0))