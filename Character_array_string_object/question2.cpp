#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str("coding Ninjas.");
    cout << "String before anipulation :" << str << endl;
    str.front() = 'C';
    str.back() = '!';
    cout << "String after manipulation : " << str;
    return 0;
}