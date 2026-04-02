#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool check(char s[])
{
    int n = strlen(s);
    char stack[100];
    int top = -1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            stack[++top] = s[i];
        }
        else
        {
            if (top == -1)
            {
                return false;
            }
            else
            {
                char ch = s[top--];
                if ((s[i] == '}' && ch != '{') || (s[i] == ']' && ch != '[') || (s[i] == ')' && ch != '('))

                {
                    return false;
                }
            }
        }
    }
    return top == -1;
}

int main()
{
    char s[] = "{[)]}";
    bool result = check(s);
    if (result)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}