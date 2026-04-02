#include <stdio.h>
#include <stdlib.h>
int num[] = {5, 7, 3, 2, 6, 1, 5, 9};
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n = sizeof(num) / sizeof(num[0]);
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(&num[i], &num[j]);
        i += 1;
        j -= 1;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}