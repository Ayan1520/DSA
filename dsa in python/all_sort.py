nums = [5,8,1,6,9,2,4]
#bubble sort
n=len(nums)
for i in range(0,n):
    is_swap=False
    for j in range(0,n-i-1):
        if nums[j]>nums[j+1]:
            nums[j],nums[j+1]=nums[j+1],nums[j]
            is_swap=True
    if is_swap==False:
        break
print(nums)

#insertion sort
for i in range(1,n):
    curr=nums[i]
    prev=i-1
    while prev>=0 and nums[prev]>curr:
        nums[prev+1]=nums[prev]
        prev-=1
    nums[prev+1]=curr
print(nums)

#selection sort
for i in range(0,n):
    min_idx=i
    for j in range(i+1,n):
        if nums[j]<nums[min_idx]:
            min_idx=j
    nums[i],nums[min_idx]=nums[min_idx],nums[i]
print(nums)

#merge sort
def merge_array(left,right):
    result=[]
    i=0
    j=0
    m=len(left)
    n=len(right)
    while i<m and j<n:
        if left[i]<=right[j]:
            result.append(left[i])
            i+=1
        else:
            result.append(right[j])
            j+=1
    if i<m:
        while i<m:
            result.append(left[i])
            i+=1
    if j<n:
        while j<n:
            result.append(right[j])
            j+=1
    return result
def merge_sort(l,h):
    if l==h:
        return [nums[l]] 
    mid=(l+h)//2
    left=merge_sort(l,mid)
    right=merge_sort(mid+1,h)
    return merge_array(left,right)
print(merge_sort(0,n-1))

#quick_sort
def partition(nums,low,high):
    pivot=nums[low]
    i=low
    j=high
    while i<j:
        while i <= high and nums[i] <pivot:
            i+=1
        while j>=low and nums[j]>pivot:
            j-=1
        if i<j:
            nums[i],nums[j]=nums[j],nums[i]
    nums[low],nums[j]=nums[j],nums[low]
    return j
def quick_sort(num,low,high):
    if low<high:
        p_idx=partition(num,low,high)
        quick_sort(num,low,p_idx-1)
        quick_sort(num,p_idx+1,high)
    return nums
print(quick_sort(nums,0,n-1))

