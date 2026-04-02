s='[{}])'
stack=[]
def isvaild(s):
    for brackets in s:
        if brackets=='(' or brackets=='[' or brackets=='{':
            stack.append(brackets)
        else:
            if len(stack)==0:
                return False
            ch=stack.pop()
            if (ch=='(' and brackets==')') or (ch=='{' and brackets=='}') or (ch=='[' and brackets==']'):
                continue
            else:
                return False
    return len(stack)==0
print(isvaild(s))


