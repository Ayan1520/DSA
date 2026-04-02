nums1 = [2,4]
nums2 = [1,2,3,4]
# #Brute Force 
# n=len(nums1)
# m=len(nums2)
# i=0
# j=0
# while i<n:
#     if nums1[i]==nums2[j]:
#         print(j)
#         j=j+1
#         while j<m:
#             if nums1[i]<nums2[j]:
#                 nums1[i]=nums2[j]
#                 break
#             else:
#                 nums1[i]=-1
#             j+=1
#         if j==m:
#             nums1[i]=-1
#         i+=1
#         j=0
#     else:
#         j+=1
# print(nums1)

#optimal

n=len(nums1)
m=len(nums2)
i=0
j=0
stack=[]
while i<n:
    if nums1[i]==nums2[j]:
        stack.append(j)
        i+=1
    else:
        j+=1
print(stack)
        

    