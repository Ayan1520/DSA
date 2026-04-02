#include <stdio.h>
#include <string.h>
int procedence(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
char infixtopostfix(char s[])
{
    int n = strlen(s);
    char result[];
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i])
        {
        }
    }
}