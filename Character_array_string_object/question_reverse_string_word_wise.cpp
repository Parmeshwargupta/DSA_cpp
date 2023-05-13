#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

string reverseStringWordWise(string input)
{
    int left = 0, i = 0, n = input.size();

    while (input[i] == ' ')
        i++;

    left = i;

    while (i < n)
    {
        if (i + 1 == n || input[i] == ' ')
        {
            int j = i - 1;
            if (i + 1 == n)
                j++;

            while (left < j)
                swap(input[left++], input[j--]);

            left = i + 1;
        }
        if (i > left && input[left] == ' ')
            left = i;

        i++;
    }
    reverse(input.begin(), input.end());
    return input;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}