#include <iostream>
using namespace std;
int main()
{
    // char ch[6] = {'a', 'b', 'c', 'd', 'e'};
    // or
    // char ch[]="abcde";
    // cout << ch << " ";
    // cout << ch;
    // return 0;

    // or

    // char str[50] = "Welcome to Coding Ninjas";
    // cout << str;
    // return 0;

    // taking input from the user cin

    // char str[50];
    // cout << "Enter the string" << endl;
    // cin >> str;
    // cout << "The Entered string is : " << str << endl;
    // return 0;

    // taking input  using cin.get

    // char str[50];
    // cout << "Enter the string : ";

    // cin.get(str, 50);
    // cout << "The entered string is : " << str << endl;
    // return 0;

    // using string Object

    string str;
    getline(cin, str);
    cout << "Entered Strin is :" << str << endl;
    return 0;
}
