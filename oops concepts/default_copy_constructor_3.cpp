#include <iostream>
#include <cstring>
using namespace std;
class Hero
{
private:
    int health;
    char *name;

public:
    char level;

    // Default constructor
    Hero()
    {
        cout << " simple constructor called" << endl;
        name = new char[100];
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
    // copy constructor
    // Hero(Hero &temp)
    // {
    //     cout << "copy constructor called" << endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }
    void print()
    {
        cout << endl;
        cout << " [ Name : " << name << ", ";
        cout << "Health : " << health << ", ";
        cout << "Level : " << level << " ] ";
        cout << endl;
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
    void setname(char name[])
    {
        strcpy(this->name, name);
    }
};
int main()
{
    Hero hero1;
    hero1.sethealth(40);
    hero1.setlevel('A');
    char name[11] = "Parmeshwar";
    hero1.setname(name);
    hero1.print();

    // use default copy constructor
    Hero hero2(hero1);
    hero2.print();
    // or
    // Hero hero2 = hero1;
}