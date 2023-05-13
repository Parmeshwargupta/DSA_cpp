#include <iostream>
using namespace std;

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

    return 0;
}