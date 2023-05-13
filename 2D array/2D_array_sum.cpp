#include <iostream>
using namespace std;

void printsum(int arr[][4], int n, int m)
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestrowsum(int arr[][4], int n, int m)
{
    int rowindex = -1;
    int maxi = INT16_MIN;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;

        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowindex = i;
        }
    }
    cout << "the maximum sum is " << maxi << endl;
    return rowindex;
}
void printsum2(int arr[][4], int n, int m)
{
    for (int j = 0; j < 4; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {

            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}
void printsum1(int arr[][4], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << sum << " ";
    cout << endl;
}
int main()
{
    int arr[3][4];
    cout << "eEnter the element of the array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // for print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "The sum of the row is ";
    printsum(arr, 3, 4);
    cout << "The sum of the total array is ";
    printsum1(arr, 3, 4);

    // for (int i = 0; i < 4; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < 3; j++)
    //     {

    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }
    cout << endl;
    cout << "The sum of the column is ";
    printsum2(arr, 3, 4);
    // cout << "The sum of the largest row is ";
    int ansindex = largestrowsum(arr, 3, 4);
    cout << "the maximum is at index :" << ansindex;
    return 0;
}