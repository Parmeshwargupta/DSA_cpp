#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    string str;
    cout << "Enter the string : " << endl;

    getline(cin, str);
    reverse(str.begin(), str.end());
    cout << str;
    return 0;
}