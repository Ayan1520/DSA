class solution:
    def precedence(self,ch):
        if ch =="+" or ch=="-":
            return 1
        if ch=="*" or ch=="/":
            return 2
        if ch=="^":
            return 3
        return 0
    def intopr(self,s):
        s=s[::-1]
        new_s=''
        for ch in s:
            if ch=="(":
                new_s+=')'
            elif ch==")":
                new_s+='('
            else:
                new_s+=ch
        s=new_s
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
        return ''.join(result[::-1])
obj = solution()
print(obj.intopr("a+b*(c^d-e)"))