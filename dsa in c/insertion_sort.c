#include <stdio.h>
int main()
{
    int arr[] = {4, 1, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > key)
        {
            arr[prev + 1] = arr[prev];
            prev -= 1;
        }
        arr[prev + 1] = key;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}