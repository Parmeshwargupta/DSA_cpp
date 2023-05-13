#include <iostream>
using namespace std;
int firstoccu(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastoccu(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int a, b, total;
    int array[10] = {1, 3, 4, 5, 6, 7, 8, 8, 8, 9};
    cout << "The first occurane of 8 is :" << firstoccu(array, 10, 8) << endl;
    cout << "The last occurane of 8 is :" << lastoccu(array, 10, 8) << endl;
    a = firstoccu(array, 10, 8);
    b = lastoccu(array, 10, 8);
    total = (b - a) + 1;
    cout << "the total number of 8 is :" << total << endl;
    return 0;
}