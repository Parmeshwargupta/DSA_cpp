#include <iostream>
using namespace std;
int main()
{
    int number[5];
    int *p;
    p = number;
    *p = 10;
    p = &number[2];
    *p = 20;
    p--;
    *p = 30;
    p = number + 3;
    *p = 40;
    p = number;
    *(p + 4) = 50;
    for (int n = 0; n < 5; n++)
    {
        cout << number[n] << ",";
    }
    return 0;
    cout << p << " " << *p << " " << number;
}