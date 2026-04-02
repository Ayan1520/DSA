n=3
brackets=['']*(n*2)
def solve(ind,total,brackets,result):
    if ind>=len(brackets):
        if total==0:
            result.append(''.join(brackets))
            return
        else:
            return
    if total<0:
        return
    brackets[ind]='('
    sum=total+1
    solve(ind+1,sum,brackets,result)
    sum=total-1
    brackets[ind]=')'
    solve(ind+1,sum,brackets,result)
    return result
x=solve(0,0,brackets,[])
print(x) # sc=o(n) #tc=o(2^n)