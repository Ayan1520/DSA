import time
nums=[5,9,7]
result=[]
def solve(subset,ind):
    st=time.time()
    if ind>=len(nums):
        result.append(subset.copy())
        return
    subset.append(nums[ind])
    solve(subset,ind+1)
    subset.pop()
    solve(subset,ind+1)
    et=time.time()
    return result

print(solve([],0)) #tc=2^n