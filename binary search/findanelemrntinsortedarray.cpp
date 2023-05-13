#include <iostream>
using namespace std;
int sortedaarr(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int even[8] = {4, 5, 6, 7, 8, 9, 11, 25};
    int odd[5] = {1, 2, 4, 5, 9};
    cout << "The index of the particular element 8 is:" << sortedaarr(even, 8, 8) << endl;
    cout << "The index of the particular element 5 is:" << sortedaarr(odd, 5, 5) << endl;
    cout << "The index of the particular element 20 is:" << sortedaarr(even, 8, 20) << endl;
    cout << "The index of the particular element 8 is:" << sortedaarr(odd, 5, 8) << endl;
    cout << "The index of the particular element 25 is:" << sortedaarr(even, 8, 25) << endl;
}