#include <iostream>
using namespace std;
// bool ispresent(int arr[][], int target, int n, int m)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (arr[i][j] == target)
//             {
//                 return true;
//             }
//             return false;
//         }
//     }
// }
int main()
{
    int n, m;

    cout << "Enter the number of the row" << endl;
    cin >> n;
    cout << "Enter the number of column" << endl;
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
    }

    return 0;
}