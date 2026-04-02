# infix to postfix

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
        result=[]
        stack=[]
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
obj = solution()
print(obj.intopo("a+b*(c^d-e)"))

#infix to prefix
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
        new_ch=''
        for ch in s:
            if ch=="(":
                new_ch+=')'
            elif ch==")":
                new_ch+='('
            else:
                new_ch+=ch
        s=new_ch
        result=[]
        stack=[]
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

#postfix to infix 
class solution:
    def potoin(self,s):
        result=[]
        for ch in s:
            if ch.isalnum():
                result.append(ch)
            else:
                oprand2=result.pop()
                oprand1=result.pop()
                new_exp=f'{oprand1}{ch}{oprand2}'
                result.append(new_exp)
        return result[-1]
obj = solution()
print(obj.potoin("abcd^e-*+"))

#prefix to infix
class solution:
    def prtoin(self,x):
        result=[]
        for ch in x[::-1]:
            if ch.isalnum():
                result.append(ch)
            else:
                oprand1=result.pop()
                oprand2=result.pop()
                result.append(f'{oprand1}{ch}{oprand2}')
        return result[-1]
obj = solution()
print(obj.prtoin("+a*b-^cde"))

#postfix to prefix
class solution():
    def potopr(self,s):
        result=[]
        for ch in s:
            if ch.isalnum():
                result.append(ch)
            else:
                oprand1=result.pop()
                oprand2=result.pop()
                result.append(f'{ch}{oprand2}{oprand1}')
        return result[-1]
obj = solution()
print(obj.potopr("abcd^e-*+"))     

#prefix to postfix
class solution():
    def prtopo(self,s):
        result=[]
        for ch in s[::-1]:
            if ch.isalnum():
                result.append(ch)
            else:
                oprand1=result.pop()
                oprand2=result.pop()
                result.append(f'{oprand1}{oprand2}{ch}')
        return result[-1]
obj = solution()
print(obj.prtopo("+a*b-^cde"))   