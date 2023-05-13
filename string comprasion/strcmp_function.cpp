
// comparision of the character array

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[50] = "Coding";
    char str2[50] = "Ninjas";

    // It returns the ASCII difference of the first two non-matching character in both the string.
    int res1 = strcmp(str1, str2);
    int res2 = strcmp(str2, str1);
    cout << res1 << endl;
    cout << res2 << endl;
    return 0;
}