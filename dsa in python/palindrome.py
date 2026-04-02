n=int(input('enter your number : '))
nums=n
result=0
while nums>0:
    last_digit=nums%10
    result=result*10+last_digit
    nums=nums//10
if n==result:
    print('palindrome')
else:
    print('not palindrome')