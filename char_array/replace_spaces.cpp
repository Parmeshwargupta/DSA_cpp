#include <iostream>
using namespace std;

string replace_space(string s)
{
    string temp = {'@', '4', '0'};
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] != ' ' && i < s.length())
        {

            temp.push_back(s[i]);
        }
        else if (s[i] == ' ')
        {
            i++;
        }
        else
        {
            temp.push_back(temp[i]);
            i++;
        }
    }
    return temp;
}
int main()
{
    string s;
    cout << "Enter the string" << endl;
    cin >> s;
    cout << replace_space(s) << endl;
    return 0;
}