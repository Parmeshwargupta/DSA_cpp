#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cout << "Enter the array1 and array2 : ";
    cin >> n >> m;
    int arr1[n];
    int arr2[m];
    int result = 0;
    // taking input in array1
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    // taking input in array2
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
        result += arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        result += arr2[i];
    }
    cout << "result : " << result;
    return 0;
}