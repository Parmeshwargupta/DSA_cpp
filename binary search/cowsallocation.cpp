#include <bits/stdc++.h>
using namespace std;
bool ispossible(int arr[], int n, int m, int mid)
// bool ispossible(vector<int> &stalls, int m, int mid)
{
    int cowcount = 1;
    int lastposi = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - lastposi >= mid)
        {
            cowcount++;
            if (cowcount == m)
            {
                return true;
            }
            lastposi = arr[i];
        }
    }
    return false;
}
int aggressivecows(int arr[], int n, int m)
{
    // sort(stalls.begin(), satlls.end()); when we use vector as array
    sort(arr, arr + n);
    int s = 0;
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (ispossible(arr, n, m, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[5] = {4, 3, 2, 1, 6};
    cout << "the maximum possible distance b/w two cows is :" << aggressivecows(arr, 5, 2) << endl;
    return 0;
}
