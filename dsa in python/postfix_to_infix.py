class solution:
    def posttoinfix(Self,s):
        stack=[]
        for ch in s:
            if ch.isalnum():
                stack.append(ch)
            else:
                oprand2=stack.pop()
                oprand1=stack.pop()
                new_expr=f"{oprand1}{ch}{oprand2}"
                stack.append(new_expr)
        return stack[-1]
# Example
obj = solution()
print(obj.posttoinfix("abcd^e-*+"))