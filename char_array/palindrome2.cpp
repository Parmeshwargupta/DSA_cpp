// class Solution {
//  public:
//   bool isPalindrome(string s) {
//     int l = 0;
//     int r = s.length() - 1;

//     while (l < r) {
//       while (l < r && !isalnum(s[l]))
//         ++l;
//       while (l < r && !isalnum(s[r]))
//         --r;
//       if (tolower(s[l]) != tolower(s[r]))
//         return false;
//       ++l;
//       --r;
//     }

//     return true;
//   }
// };

class Solution
{
private:
    bool valid(char ch)
    {
        if ((ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A') || (ch >= '0' && ch <= '9'))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    char tolowerCase(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '1' && ch <= '9'))
        {
            return ch;
        }
        else
        {
            return (ch - 'A' + 'a');
        }
    }
    bool checkPalindrome(string s)
    {
        int st = 0;
        int e = s.length() - 1;
        while (st <= e)
        {

            if (s[st] != s[e])
            {
                return 0;
            }
            else
            {
                st++;
                e--;
            }
        }
        return true;
    }

public:
    bool isPalindrome(string s)
    {
        string temp = "";
        for (int j = 0; j < s.length(); j++)
        {
            if (valid(s[j]))
            {
                temp.push_back(s[j]);
            }
        }
        for (int j = 0; j < temp.length(); j++)
        {
            temp[j] = tolowerCase(temp[j]);
        }
        return checkPalindrome(temp);
    }
};