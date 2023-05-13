#include <bits/stdc++.h>
using namespace std;

int selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return 0;
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        // cout << endl;
    }
}
int main()
{
    int arr[8] = {8, 9, 4, 6, 7, 3, 5, 1};
    selectionsort(arr, 8);
    cout << "The sorted array is :" << endl;
    printarray(arr, 8);
}