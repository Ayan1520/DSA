class solution:
    def pretoin(self,s):
        s=s[::-1]
        stack=[]
        for ch in s:
            if ch.isalnum():
                stack.append(ch)
            else:
                oprand1=stack.pop()
                oprand2=stack.pop()
                new_expr=f"{oprand1}{ch}{oprand2}"
                stack.append(new_expr)
        return stack[-1]
# Example
obj = solution()
print(obj.pretoin("+a*b-^cde"))