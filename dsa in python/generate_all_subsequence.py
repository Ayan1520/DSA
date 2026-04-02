nums=[5,9,3,4,1]
target=3
result=[]
def solve(ind,subset,sum):
    if target==sum:
        result.append(subset.copy())
        return
    if sum > target or ind >= len(nums):
        return
    subset.append(nums[ind])
    sum=sum+nums[ind]
    solve(ind+1,subset,sum)
    e=subset.pop()
    sum=sum-e
    solve(ind+1,subset,sum)
    return result
print(solve(0,[],0)) # tc = o(2^n) # sc = o(n)
