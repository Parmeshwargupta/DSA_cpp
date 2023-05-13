#include <iostream>
using namespace std;
int pivote(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int binerysearch(int arr[], int s, int e, int k)
{
    int start = s;
    int end = e;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int findelement(int arr[], int n, int k)
{
    int pivot = pivote(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binerysearch(arr, pivot, (n - 1), k);
    }
    else
    {
        return binerysearch(arr, 0, pivot - 1, k);
    }
}
int main()
{
    int arr[8] = {8, 9, 2, 3, 4, 5, 6, 7};
    cout << "The pivote element is :" << pivote(arr, 8) << endl;
    cout << "The position of 4 is :" << findelement(arr, 8, 4) << endl;
    return 0;
}