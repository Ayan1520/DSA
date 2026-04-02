#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int right, int mid)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int result[n1 + n1];
    // create right array
    int L[n1];
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }
    // create left array
    int R[n2];
    for (int i = 0; i < n2; i++)
    {
        R[i] = arr[mid + 1 + i];
    }

    // compare
    int low = 0;
    int high = 0;
    int i = 0;
    int j = 0;
    while (low < n1 && high < n2)
    {
        if (L[low] < R[high])
        {
            arr[i++] = L[low];
        }
        else
        {
            arr[i++] = R[high];
        }
        if (low < n1)
        {
            while (low < n1)
            {
                arr[i++] = L[low];
            }
            if (high < n2)
            {
                while (high < n2)
                {
                    arr[i++] = R[high];
                }
            }
        }
    }
}

void mergesort(int arr[], int low, int high)
{
    if (low < high)
    {
        return;
    }
    int mid = (high + low) / 2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    return
}