#include <stdio.h>
#include <stdlib.h>
int binary_search(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = binary_search(arr, n, 3);
    if (x == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("%d", x);
    }
    return 0;
}