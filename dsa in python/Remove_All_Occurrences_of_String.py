s = "axxxxyyyyb"
part = "xy"
n=len(part)
x=str.find(s,part)
while x!=-1:
    s=s[:x]+s[x+n:]
    x=str.find(s,part)
print(s)