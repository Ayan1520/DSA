result=[]
n=3
def solve(ind,result,flag,nums):
    if ind>=len(nums):
        result.append(''.join(nums))
        return
    nums[ind]='0'
    solve(ind+1,result,True,nums)
    if flag==True:
        nums[ind]='1'
        solve(ind+1,result,False,nums)
        nums[ind]='0'
    return result
nums=['0']*n
print(solve(0,[],True,nums))
