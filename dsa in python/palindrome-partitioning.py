s = "aab"
n=len(s)
stack=[]
ans=[]
def palin_par(s):
    if len(s)==0:
        ans.append(stack.copy())
        return
    for i in range(0,len(s)+1):
        if s[:i]==s[i-1::-1]:
            stack.append(s[:i])
            x=s[i:]
            print(x)
            palin_par(x) 
            stack.pop()
    return ans
print(palin_par(s))      
