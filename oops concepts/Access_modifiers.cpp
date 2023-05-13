#include <iostream>
using namespace std;
class Hero
{
    // properties
public:
    int health;

    // private:
    char level;
    void print()
    {
        cout << level << endl;
    }
};
int main()
{
    Hero ramesh;
    ramesh.health = 70;
    ramesh.level = 'A';
    cout << "health is " << ramesh.health << endl;
    cout << "Level is " << ramesh.level << endl;
    cout << "size: " << sizeof(ramesh) << endl;
}