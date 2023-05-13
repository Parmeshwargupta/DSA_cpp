#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int d, int n)
{
    int temp[n];
    int k = 0;
    for (int i = d; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
void PrintTheArrray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 56, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;
    // the original array is
    cout << "the original array is";
    PrintTheArrray(arr, n);
    cout << endl;
    // function calling
    rotate(arr, d, n);
    cout << "The rotated array is";
    PrintTheArrray(arr, n);
}