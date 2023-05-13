#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;

int countWords(string input)
{
    // Write your code here
    int word = 1, ch = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == ' ')
        {
            if (ch != 0)
            {
                word++;
            }
            ch = 0;
        }
        else
        {
            ch++;
        }
    }
    // cout << word;
    return word;
}

int main()
{
    string input;
    getline(cin, input);
    int output = countWords(input);
    cout << output << endl;
    return 0;
}