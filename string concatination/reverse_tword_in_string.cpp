// C++ program to reverse a string
#include <bits/stdc++.h>
using namespace std;

// Function to reverse words*/
void reverseWords(string s)
{

    // temporary vector to store all words
    vector<string> temp;
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {

        // Check if we encounter space
        // push word(str) to vector
        // and make str NULL
        if (s[i] == ' ')
        {
            temp.push_back(str);
            str = "";
        }

        // Else add character to
        // str to form current word
        else
            str += s[i];
    }

    // Last word remaining,add it to vector
    temp.push_back(str);

    // Now print from last to first in vector
    int i;
    for (i = temp.size() - 1; i > 0; i--)
        cout << temp[i] << " ";
    // Last word remaining,print it
    cout << temp[0] << endl;
}

// Driver Code
int main()
{
    // string s = "i like this program very much";
    string s;
    getline(cin, s);
    reverseWords(s);
    return 0;
}
