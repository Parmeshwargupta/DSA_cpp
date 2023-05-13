#include <bits/stdc++.h>
using namespace std;

void rotate_array(int arr[], int n)
{
    int x = arr[n - 1], i;
    for (i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "the original array is : ";
    printArray(arr, n);
    cout << endl;
    rotate_array(arr, n);
    cout << "The rotated array is : ";
    printArray(arr, n);
}