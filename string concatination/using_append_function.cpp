#include <iostream>
using namespace std;
int main()
{
    string str1 = "Coding";
    string str2 = " Ninjas";
    cout << "concatenated string is : " << endl;
    str1.append(str2);
    cout << str1;
    return 0;
}