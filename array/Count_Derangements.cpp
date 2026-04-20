class Solution
{
public:
    int slove(int n)
    {
        if (n == 1)
            return 0;
        if (n == 2)
            return 1;
        return (n - 1) * (slove(n - 1) + slove(n - 2));
    }
    int derangeCount(int n)
    {
        // code here
        if (n <= 1)
            return 0;
        return slove(n);
    }
};