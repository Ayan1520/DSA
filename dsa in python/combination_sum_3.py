nums=[1,2,3,4,5,6,7,8,9]
k=3
target=9
def solve(ind,total,result,subset,last):
    if len(subset) == k and total==target:
        result.append(subset)
        return
    if len(subset)>k and total!=target:
        return

    return result
print(solve(0,0,[],[]))
