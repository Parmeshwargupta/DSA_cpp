#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(5);
    d.push_front(2);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    d.pop_front();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "print First Index Element" < < < < endl;
}