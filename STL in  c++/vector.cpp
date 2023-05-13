#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    // initialise the vector
    vector<int> a(4, 1);
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    // copy a vector into another vector
    vector<int> b(a);
    for (int i : b)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "cpacity->" << v.capacity() << endl;
    v.push_back(2);
    cout << "cpacity->" << v.capacity() << endl;

    v.push_back(5);
    cout << "cpacity->" << v.capacity() << endl;

    v.push_back(6);
    cout << "cpacity->" << v.capacity() << endl;

    v.push_back(1);
    cout << "capacity->" << v.capacity() << endl;
    v.push_back(4);
    cout << "capacity->" << v.capacity() << endl;
    cout << "size->" << v.size() << endl;
    cout << "front" << v.front() << endl;
    cout << "front" << v.back() << endl;

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "capacity before clear" << v.capacity() << endl;
    cout << "size before clear" << v.size() << endl;
    v.clear();
    cout << "size after clear" << v.size() << endl;
    cout << "capacity after clear" << v.capacity() << endl;
}