class solution:
    def precedence(self,ch):
        if ch =="+" or ch=="-":
            return 1
        if ch=="*" or ch=="/":
            return 2
        if ch=="^":
            return 3
        return 0
    def intopo(self,s):
        stack=[]
        result=[]
        for ch in s:
            if ch.isalnum():                      
                result.append(ch)
            elif ch=='(':
                stack.append(ch)
            elif ch==')':
                while stack and stack[-1]!='(':
                    result.append(stack.pop())
                stack.pop()
            else:
                while stack and self.precedence(stack[-1])>=self.precedence(ch):
                    result.append(stack.pop())
                stack.append(ch)
        while stack:
            result.append(stack.pop())
        return ''.join(result)
    

# Example
obj = solution()
print(obj.intopo("a+b*(c^d-e)"))
