def partition(nums, low, high):
    pivot = nums[low]
    i = low
    j = high

    while i < j:
        while i <= high - 1 and nums[i] <= pivot:
            i += 1
        while j >= low + 1 and nums[j] >= pivot:
            j -= 1
        if i < j:
            nums[i], nums[j] = nums[j], nums[i]

    nums[low], nums[j] = nums[j], nums[low]
    return j

def quick_sort(nums, low, high):
    if low < high:  # base case
        p_index = partition(nums, low, high)
        quick_sort(nums, low, p_index - 1)
        quick_sort(nums, p_index + 1, high)

nums = [4, 1, 7, 6, 3, 2, 8]
n = len(nums)
quick_sort(nums, 0, n - 1)
print(nums)

# in best and averge case tc=o(nlogn)
# in worst case tc=o(n^2)
# sc=o(1)