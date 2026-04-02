n=int(input('enter your number : '))
nums=n
m=len(str(n))
result=0
while nums>0:
    last_digit=nums%10
    result=result+last_digit**m
    nums=nums//10
if n==result:
    print('amstrong')
else:
    print('not amstrong')