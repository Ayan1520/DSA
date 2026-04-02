
s = "ADOBECODEBANC"
t = "ABC"
#brute force
freq=[0]*256
n1=len(s)
n2=len(t)
count=0
for i in range(0,n1):
    for j in range(0,n2):
        freq[ord(t[j])]+=1
    if freq[ord(s[i])]>0:
        count+=1
        freq[ord(s[i])]-=1
        
