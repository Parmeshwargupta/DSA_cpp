#include <iostream>
using namespace std;
int main()
{
    char arr[65];
    int i;
    for (i = 0; i < 10; i++)
    {
        *(arr + i) = 48 + i;
    }
    *(arr + i) = '\0';
    cout << arr;
    return 0;
}