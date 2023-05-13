#include <iostream>
using namespace std;
void even_odd(int n)
{
    // int k;
    // cin>>>>endl;

    if (n % 2 == 0)
    {

        cout << "the number is even" << endl;
    }
    else
    {
        cout << "the number is odd" << endl;
    }
}
int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;

    cout << "the number is {" << n << "} " << endl;
    even_odd(n);

    return 0;
}