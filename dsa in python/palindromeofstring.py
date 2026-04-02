# s='abcdfdgfcba'
# right=len(s)-1
# left=0
# is_palindrome = True
# while left<right:
#     if s[left]!=s[right]:
#         is_palindrome=False
#         break
#     else:
#         left+=1
#         right-=1
# if is_palindrome==True:
#     print('Palindrome')
# else:
#     print('Not Palindrome')
    
# USING recurison
def palindrome(x,left,right):
    if left>=right:
        return True
    if x[left]!=x[right]:
        return False
    return palindrome(x,left+1,right-1)
print(palindrome('MoM',0,2))
