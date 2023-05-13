#include <iostream>
using namespace std;
int search(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)

        if (arr[i] == k)

            return i;

    return -1;
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the emement which you want to search : ";
    cin >> x;
    int result = search(arr, n, x);
    if (result == -1)
    {
        cout << "The element " << x << " is not present in array " << endl;
    }
    else
    {
        cout << "The element " << x << " is present int the array " << endl;
    }
    return 0;
}