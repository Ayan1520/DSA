# n=5873
# nums=n
# count=0
# while nums>0:
#     count+=1
#     nums=nums//10
# print(count)

from math import *
def countdigit(nums):
    return int(log10(nums)+1)
n=countdigit(1234)
print(n)