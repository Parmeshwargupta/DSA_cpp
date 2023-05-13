#include <iostream>
using namespace std;

class Hero
{
public:
    string name;
    int id;
    string roll;
    // void fun()
};
int main()
{
    Hero h1;
    h1.name = "Ranveer";
    h1.id = 3;
    h1.roll = "main_roll";
    cout << h1.name << " " << h1.id << " " << h1.roll << endl;
}