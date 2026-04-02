#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[] = "MAM";
int main()
{
    int n = strlen(s);
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            printf("Not Palindrom");
            break;
        }
        printf("Palindrom");
        i++;
        j--;
    }
    return 0;
}