#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "babbar";
    m[8] = "kumar";
    m[2] = "love";
    m[5] = "suhel";
    m.insert({3, "sonu"});
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "finding -13 ->" << m.count(13) << endl;
}