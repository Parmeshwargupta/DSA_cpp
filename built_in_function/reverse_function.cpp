#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str = "Coding Ninjas";
    reverse(str.begin(), str.end());
    cout << str;
    return 0;
}