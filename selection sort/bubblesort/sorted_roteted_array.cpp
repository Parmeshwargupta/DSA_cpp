#include <iostream>
#include <vector>
using namespace std;
bool rotate(vector<int> &nums)
{
    int count = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            count++;
        }
    }
    if (nums[n - 1] > nums[0])
        count++;

    return count <= 1;
};
void print(vector<int> &nums)
{
    for (int i : nums)
    {
        cout << i << " ";
    }
};
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
    rotate(arr);
}
