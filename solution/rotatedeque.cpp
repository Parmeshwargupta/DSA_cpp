#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq{1, 2, 3, 4, 5, 6, 7};
    int d = 3;
    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // rotate the deque left by d elements
    for (int i = 0; i < d; i++)
    {
        int temp = dq.front();
        dq.pop_front();
        dq.push_back(temp);
    }
    //  Print the rotate deque
    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}