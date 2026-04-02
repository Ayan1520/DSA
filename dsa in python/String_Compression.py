chars=  ["a","a","b","b","c","c","c"]
str1=''.join(chars)
print(str1)
i=0
j=i+1
n=len(str1)
print(n)
count=1
str2=''
while j<n:
    if str1[i]==str1[j]:
        count+=1
    else:
        str2+=str1[i]
        if count!=1:
            str2+=str(count) 
        count=1
        i=j
    j+=1
str2+=str1[i]
if count!=1:
    str2+=str(count)
print(list(str2)) #tc=o(n) #sc=o(n)

#optimal(sc: o(1))
chars=  ["a","a","b","b","c","c","c"]
i=0
j=0
idx=i
count=0
n=len(chars)
while j<n:
    ch=chars[i]
    if chars[j]==ch:
        count+=1
        j+=1
    else:
        chars[idx]=ch
        idx+=1
        if count!=1:
            cout=str(count)
            for digit in cout:
                chars[idx]=digit
                idx+=1
        count=0
        i=j
chars[idx]=chars[i]
idx+=1
if count!=1:
    for digit in str(count):
        chars[idx]=digit
        idx+=1
print(chars[:idx])