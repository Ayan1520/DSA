nums=[5,9,3]
def solve(ind,nums,total,result):
    if ind >= len(nums):
        result.append(total)
        return
    sum=total+nums[ind]
    solve(ind+1,nums,sum,result)
    sum=total
    solve(ind+1,nums,sum,result)
    return result
print(solve(0,nums,0,[]))