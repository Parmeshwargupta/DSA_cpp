#include <iostream>
#include <vector>
using namespace std;
void insertionsort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int temp = arr[i];
        int j = i - 1;

        for (; j >= 0; j--)
        {

            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                // ruk jao
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout < < < < " ";
    }
}

int main()
{
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(9);
    arr.push_back(4);
    arr.push_back(7);
    arr.push_back(1);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> ans(insertionsort(arr));
    cout << "The insertionsort is :" << endl;
    print(arr);
}