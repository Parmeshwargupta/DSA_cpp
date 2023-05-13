#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<int> &nums, int k)
{
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + k) % nums.size()] = nums[i];
    }
    nums = temp;
}
void print(vector<int> &nums)
{
    for (int i : nums)
    {
        cout << i << " ";
    }
}
int main()
{

    vector<int> arr;
    arr.push_back(23);
    arr.push_back(45);
    arr.push_back(65);
    arr.push_back(75);
    arr.push_back(56);
    arr.push_back(12);
    arr.push_back(61);
    arr.push_back(26);
    arr.push_back(25);
    arr.push_back(56);
    print(arr);
    rotate(arr, 2);
    cout << endl;
    print(arr);
}
