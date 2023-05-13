#include <iostream>
using namespace std;
int peak(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
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
int main()
{
    int array[5] = {2, 3, 9, 6, 0};
    cout << "The peak element is: " << peak(array, 5) << endl;
    return 0;
}