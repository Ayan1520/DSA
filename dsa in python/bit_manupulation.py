# convvert int to binary
def convert_int_to_binary(nums):
    result=[]
    while nums>0:
        if nums%2==1:
            result.append(1)
        else:
            result.append(0)
        nums=nums//2
    return result[::-1]
print(convert_int_to_binary(257)) # tc= o(logn) #sc=log(n)

# convert binary to decimal
def convert_binary_to_decimal(binary):
    decimal=0
    power=len(binary)-1
    for i in range(0,len(binary)):
        decimal=decimal+binary[i]*(2**power)
        power-=1
    return decimal
print(convert_binary_to_decimal([1,0,0,0,0,0,0,0,1])) # tc = o(logn) #sc = o(1)

