#include <iostream>
using namespace std;

bool ispresent(int arr[][4], int target, int n, int m)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[3][4];
    cout << "Enter the element of the 2d array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int target;
    cout << "Enter the element to search" << endl;
    cin >> target;
    if (ispresent(arr, target, 3, 4))
    {
        cout << "Element is Present in the Array" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}