#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int start, int end)
{
    // int start = 0;
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int end = n - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        // cout << endl;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    // to print original array
    printarray(arr, n);
    // function calling
    reverse(arr, 0, n - 1);

    cout << "Reversed array is" << endl;
    printarray(arr, n);
    return 0;
}
