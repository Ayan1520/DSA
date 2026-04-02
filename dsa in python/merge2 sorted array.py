nums1 = [4,5,6,0,0,0]
m = 3
nums2 = [2,5,6]
n = 3
idx=m+n-1
i=m-1
j=n-1
while i>=0 and j>=0:
    if nums2[j]>nums1[i]:
        nums1[idx]=nums2[j]
        j-=1
    else:
        nums1[idx]=nums1[i]
        i-=1
    idx-=1
while j>=0:
    nums1[idx]=nums2[j]
    idx-=1
    j-=1
print(nums1)