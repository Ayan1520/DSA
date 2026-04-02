nums=[2,3,6,7]
result=[]
def solve(ind,total,subset,target):
    if ind >= len(nums) :
        return
    if total==target:
        result.append(subset.copy())
        return
    elif total > target:
        return
    total=total+nums[ind]
    subset.append(nums[ind])
    solve(ind,total,subset,target)
    total=total-nums[ind]
    subset.pop() 
    solve(ind+1,total,subset,target)
    return result
print(solve(0,0,[],6)) # sc = o(t)+o(k) tc=o(2^t * k)