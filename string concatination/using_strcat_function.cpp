#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
int main()
{
    char str1[50] = "Coding";
    char str2[50] = "Ninjas";
    cout << "concatenate the string" << endl;
    strcat(str1, str2);
    cout << str1;
    return 0;
}