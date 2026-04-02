#include <stdio.h>
#include <stdbool.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubble_sort(int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool is_swap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(&nums[j], &nums[j + 1]);
                is_swap = true;
            }
        }
        if (is_swap == false)
        {
            break;
        }
    }
}

int main()
{
    int nums[] = {4, 5, 6, 7, 1, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    bubble_sort(nums, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}