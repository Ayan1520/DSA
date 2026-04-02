#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter your number : ";
    cin >> n >> m;
    n > m ? cout << n : cout << m;
    return 0;
}