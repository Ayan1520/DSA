/*#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> search(vector<vector<int>> &arr)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            if (arr[i][j] == 0)
            {
                ans.push_back({i, j});
            }
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    vector<vector<int>> idx = search(arr); // tc=o(n*m)
    int m = arr.size();
    int n = arr[0].size();
    int size = idx.size();
    for (int i = 0; i < size; i++)
    { // tc=o(m)
        // UP
        int r = idx[i][0];
        int c = idx[i][1];
        for (int i = r - 1; i >= 0; i--) // tc =o(n)
        {
            arr[i][c] = 0;
        }
        // DOWN
        for (int i = r + 1; i < n; i++) // tc=o(n)
        {
            arr[i][c] = 0;
        }
        // LEFT
        for (int j = c - 1; j >= 0; j--) // tc=o(n)
        {
            arr[r][j] = 0;
        }
        // RIGHT
        for (int j = c + 1; j < n; j++) // tc=o(n)
        {
            arr[r][j] = 0;
        }
    }
    for (int i = 0; i < m; i++) // tc=o(n*m)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
} // total = o(n*m+k*n)
*/

// brute force
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<vector<int>> arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
//     int m = arr.size();
//     int n = arr[0].size();
//     for (int i = 0; i < m; i++) // tc=o(m)
//     {
//         for (int j = 0; j < n; j++) // tc=o(n)
//         {
//             if (arr[i][j] == 0)
//             {
//                 // UP
//                 int r = i;
//                 int c = j;
//                 for (int i = r - 1; i >= 0; i--) //tc=o(n)
//                 { // tc =o(n)
//                     if (arr[i][c] != 0)
//                     {
//                         arr[i][c] = -1;
//                     }
//                 }
//                 // DOWN
//                 for (int i = r + 1; i < n; i++) //tc =o(n)
//                 {
//                     if (arr[i][c] != 0)
//                     {
//                         arr[i][c] = -1;
//                     }
//                 }
//                 // LEFT
//                 for (int j = c - 1; j >= 0; j--) //tc =o(n)
//                 {
//                     if (arr[r][j] != 0)
//                     {
//                         arr[r][j] = -1;
//                     }
//                 }
//                 // RIGHT
//                 for (int j = c + 1; j < n; j++) //tc=o(n)
//                 {
//                     if (arr[r][j] != 0)
//                     {
//                         arr[r][j] = -1;
//                     }
//                 }
//             }
//         }
//     }
//     for (int i = 0; i < m; i++) //tc=o(m)
//     {
//         for (int j = 0; j < n; j++) //tc=o(n)
//         {
//             if (arr[i][j] == -1)
//             {
//                 arr[i][j] = 0;
//             }
//         }
//     }

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// optimal

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    int m = arr.size();
    int n = arr[0].size();
    int col0 = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                arr[i][0] = 0;
                if (j != 0)
                    arr[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i][0] == 0 || arr[0][j] == 0)
            {
                arr[i][j] = 0;
            }
        }
    }
    if (col0 == 0)
    {
        for (int i = 0; i < n; i++)
            arr[i][0] = 0;
    }

    return 0;
}