chars = ["a","a","b","b","c","c","c"]
n=len(chars)
result=[]
stack=[]

def palindrome(partition):
    if len(chars)==0:
        result.append(stack.copy())
        return
    for i in range(n):
        if chars[:i+1]==chars[i-1:]:
            stack.append(chars[:i+1])
            partition=chars[i:]
            palindrome(partition)