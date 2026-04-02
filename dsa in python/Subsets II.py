nums = [1,2,2]
n=len(nums)
result=[]
def solve(idx,subset):
    if idx>=n:
        result.append(subset.copy())
        return
    subset.append(nums[idx])
    solve(idx+1,subset)
    subset.pop()
    i=idx+1
    while i<n and nums[i]==nums[i-1]:
        i+=1
    solve(i,subset)
    return result
print(solve(0,[]))