result=[4,3,2,1]
def merge_array(left,right):
    result=[]
    i=0
    j=0
    n=len(left)
    m=len(right)
    while i<n and j<m:
        if left[i]<= right[j]:
            result.append(left[i])
            i+=1
        else :
            result.append(right[j])
            j+=1
        if i<n:
            while i<n:
                result.append[left[i]]
                i+=1
        if j<m:
            while j<m:
                result.append(right[j])
                j+=1
def sorted(arr):
    if len(arr)<=1:
        return arr
    mid=len(arr)//2
    left_arr=result[:mid]
    right_arr=result[mid:]
    left=sorted[left_arr]
    right=sorted[right_arr]
    return merge_array(left,right)
    
