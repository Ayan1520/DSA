s = " "
n=len(s)
print(n)
output=''
for ch in s:
    if ch.isalnum():
        output+=ch.lower()
print(output)
m=len(output)
i=0
j=m-1
bool=True
while i<=j:
    if output[i]!=output[j]:
        bool=False
        break
    i+=1
    j-=1
if bool==True:
    print(True)
else:
    print(False)
