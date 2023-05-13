#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int start = 0;
    int end = s.size() - 1;
    int flag = 0;
    while (start < end)
    {
        if (s[start] == s[end])
        {
            flag = 1;
            break;
        }
        else
        {
            start++;
            end--;
        }
    }
    if (flag == 1)
    {
        cout << "the string is palindrome" << endl;
    }
    else
        cout << "the string is not palindrome" << endl;

    return 0;
}