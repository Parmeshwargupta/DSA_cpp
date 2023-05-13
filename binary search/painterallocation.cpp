#include <iostream>
using namespace std;
bool ispossible(int arr[], int n, int m, int mid)
{
    int paintercount = 1;
    int blocksum = 0;
    for (int i = 0; i < n; i++)
    {
        if (blocksum + arr[i] <= mid)
        {
            blocksum += arr[i];
        }
        else
        {
            paintercount++;
            if (paintercount > m || arr[i] > mid)
            {
                return false;
            }
            blocksum = arr[i];
        }
    }
    return true;
}
int painterallocation(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (ispossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[4] = {5, 5, 5, 5};
    cout << "possible minmum solution :" << painterallocation(arr, 4, 2) << endl;
    return 0;
}
