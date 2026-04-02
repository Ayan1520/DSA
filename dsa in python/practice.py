
s = "the sky is blue"
result=""
n=len(s)
char_hash=[]
temp=''
result=''
for ch in s:
    if ch!=' ':
        temp+=ch
    else:
        char_hash.append(temp)
        char_hash.append(' ')
        temp=''
if temp:
    char_hash.append(temp)
m=len(char_hash)
for i in range(m-1,-1,-1):
    result+=char_hash[i]
print(result)


