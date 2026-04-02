# def bubble_sort(x):
#     n=len(x)
#     for i in range(n-2,-1,-1):
#         for j in range(0,i+1):
#             if x[j]>x[j+1]:
#                 x[j],x[j+1]=x[j+1],x[j]
# x=[7,6,5,4,3,2,1]
# bubble_sort(x)
# print(x) # tc = O(n^2)  sc=O(1)

def bubble_sort(x):
    n=len(x)
    for i in range(n-2,-1,-1):
        is_swap=False 
        for j in range(0,i+1):
            if x[j]>x[j+1]:
                x[j],x[j+1]=x[j+1],x[j]
                is_swap=True
        if is_swap==False:
            break
        print(x)
x=[5,8,1,6,9,2,4]
bubble_sort(x)
print(x) # Best Case
