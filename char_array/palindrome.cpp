#include <iostream>
using namespace std;
bool checkPalindrome(char s[], int n)
{
    int st = 0;
    int e = n - 1;
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
    return 1;
}

void reverse(char name[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << name[i] << "";
    }
}
int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter the name :" << endl;
    cin >> name;
    cout << "the reverse of the name is :";
    int n = getlength(name);
    reverse(name, n);
    cout << endl;
    cout << "Is it Palindrome or not : " << checkPalindrome(name, n);

    return 0;
}