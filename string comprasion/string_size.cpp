#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // using inbuilt function

    // string str = "Coding Ninjas";
    // cout << str.size();
    // return 0;

    // reverse the string using the function

    // string str = "Coding Ninjas";
    // reverse(str.begin(), str.end());
    // cout << str;

    // using sort inbuilt function

    string str = "Welcome to My Home Town";
    sort(str.begin(), str.end());
    cout << str << endl;
    return 0;

    // output: HMTWceeelmmnooootwy
}