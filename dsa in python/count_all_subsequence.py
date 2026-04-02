nums=[5,9,3,4,1]
target=3
sum=0
def solve(ind,sum):
    if target==sum:
        return 1
    if ind>=len(nums) or sum>target:
        return 0
    sum=sum+nums[ind]
    p=solve(ind+1,sum)
    sum=sum-nums[ind]
    np=solve(ind+1,sum)
    return np+p
print(solve(0,0)) # tc = o(2^n) # sc = o(n)
