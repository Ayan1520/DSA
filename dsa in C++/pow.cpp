#include <iostream>
#include <cmath>
using namespace std;
double pow(double a, double b)
{
    if (b == 1)
        return 1;
    if (b > 0)
    {
        if (fmod(b, 2) == 0)
        {
            return a * pow(a, b / 2);
        }
        else
        {
            return a * pow(a, b / 2 + 1);
        }
    }
}
int main()
{
    double a, b;
    cin >> a >> b;
    cout << pow(a, b);
    return 0;
}