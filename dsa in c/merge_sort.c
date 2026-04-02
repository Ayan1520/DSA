#include <stdio.h>
#include <stdlib.h>

int *merge(int left[], int right[], int n, int m)
{
    int *result = NULL;
    int size = 0;
    int i = 0, j = 0;

    // merge two arrays
    while (i < n && j < m)
    {
        size++;
        result = realloc(result, size * sizeof(int));

        if (left[i] <= right[j])
        {
            result[size - 1] = left[i++];
        }
        else
        {
            result[size - 1] = right[j++];
        }
    }

    // leftover from left side
    while (i < n)
    {
        size++;
        result = realloc(result, size * sizeof(int));
        result[size - 1] = left[i++];
    }

    // leftover from right side
    while (j < m)
    {
        size++;
        result = realloc(result, size * sizeof(int));
        result[size - 1] = right[j++];
    }

    return result;
}

int *merge_sort(int arr[], int n)
{
    if (n <= 1)
    {
        return arr;
    }

    int mid = n / 2;

    int *left = merge_sort(arr, mid);
    int *right = merge_sort(arr + mid, n - mid);

    int *result = merge(left, right, mid, n - mid);

    free(left);
    free(right);

    return result;
}

int main()
{
    int arr[] = {5, 2, 9, 1, 3, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int *sorted = merge_sort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", sorted[i]);

    free(sorted);
    return 0;
}
