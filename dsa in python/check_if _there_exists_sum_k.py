nums=[5,9,3,4,1]
target=10
def solve(ind,sum):
    if target==sum:
        return True
    if sum > target or ind >= len(nums):
        return False
    sum=sum+nums[ind]
    pick=solve(ind+1,sum)
    if pick==True:
        return True
    sum=sum-nums[ind]
    nt_pick=solve(ind+1,sum)
    return nt_pick
print(solve(0,0)) # tc = o(2^n) # sc = o(n)
