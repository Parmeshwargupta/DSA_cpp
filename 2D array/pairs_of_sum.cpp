#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    int sum;
    cout << "Enter the sum : ";
    cin >> sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
                count++;
        }
    }
    cout << "Count of pairs is " << count;
    return 0;
}