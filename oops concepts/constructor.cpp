#include <iostream>
using namespace std;
class Hero
{
private:
    int health;

    char level;
    Hero()
    {
        cout << "Constructor Called" << endl;
    }
    // Parmatrised Constructor
    Hero(int helth)
    {
        health = health;
    }
    void print()
    {
        cout << level << endl;
    }
    // int getHealth()
    // {

    //     return health;
    // }
    // char getLevel()
    // {
    //     return level;
    // }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    // Static allocation
    Hero h1;
    h1.setHealth(84);
    h1.setLevel('A');
    cout << "the health is " << h1.health << endl;
    cout << "the level is " << h1.level << endl;

    // Dynamic allocation
    Hero *h2 = new Hero;
    h2->setLevel('A');
    h2->setHealth(85);
    cout << "the health is " << (*h2).setHealth() << endl;
    cout << "the level is " << (*h2).setLevel() << endl;
}