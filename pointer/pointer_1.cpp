#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int i = a;
    cout << " the value is :" << a << endl;
    i++;
    cout << " the value is" << a << endl;

    int *p = &a;
    cout << " before" << a << endl;
    (*p)++;
    cout << "After:" << a << endl;

    // copy the pointer

    int *q = p;
    cout << p << "_" << q << endl;
    cout << *p << "_" << *q << endl;

    int num = 3;
    int *t = &num;
    cout << (*t)++ << endl;
    cout << *t << endl;
    *t = *t + 1;
    cout << *t << endl;
    cout << "Before the address of t  :" << t << endl;
    t = t + 1;
    cout << "after the address of t :" << t << endl;
    return 0;
}