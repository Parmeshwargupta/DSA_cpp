#include <iostream>
using namespace std;
class Hero
{
private:
    int health;

public:
    char level;

    // Default constructor
    Hero()
    {
        cout << "constructor called" << endl;
    }

    Hero(int health)
    {
        cout << "this-> " << this << endl;
        this->health = health;
    }
    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }
    void print()
    {
        cout << level << endl;
    }
    int gethealth()
    {
        return health;
    }
    int getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health = h;
    }
    void setlevel(char ch)
    {
        level = ch;
    }
};
int main()
{
    // static constructure
    Hero ramesh(10);
    cout << "The address of Ramesh is : " << &ramesh << endl;
    ramesh.gethealth();

    // Dynamic constructure
    Hero *h = new Hero(11);
    h->print();

    Hero temp(20, 'B');
    temp.print();
}