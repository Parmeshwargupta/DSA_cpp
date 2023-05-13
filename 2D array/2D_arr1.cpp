#include <iostream>
using namespace std;
int main()
{
    // Create 2 d array
    // int arr[3][4];
    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr[3][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {7, 8, 9, 4}};
    // taking input -> row wise input
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // taking input -> column wise input
    // for (int j = 0; j < 4; j++)
    // {
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
