#brute force
strs = ["flower","flow","flight"]
n=len(strs)
output=""
for i in range(0,n-1):
    result=strs[i]
    m=len(result)
    j=m-1
    while j>=0:
        x=str.find(strs[i+1],result)
        if x==-1:
            result=result[:j]
        else:
            output=result
        j-=1
    if output=='':
        break
print(output)

strs = ["ab", "a"]
n=len(strs)
m=len(strs[0])
output=''
for i in range(0,m):
    result=strs[0][i]
    print(result)
    for j in range(1,n):
        if len(strs[j])>i and result!=strs[j][i]:
            bool=False
            break
        print(bool)
    if bool==True:
        output+=result
print(output)
