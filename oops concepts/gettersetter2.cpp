#include <iostream>
using namespace std;
class Hero
{
private:
    int health;

public:
    char level;
    int gethealth()
    {
        return health;
    }
    char getlevel()
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
    Hero h1;
    h1.sethealth(70);
    h1.level = 'a';
    cout << "the health is : " << h1.gethealth() << endl;
    cout << "the level is : " << h1.level << endl;

    Hero *b = new Hero;
    b->sethealth(70);
    b->level = 'A';
    cout << "the health is : " << (*b).gethealth() << endl;
    cout << "the level is : " << (*b).level << endl;

    cout << "the health is : " << b->gethealth() << endl;
    cout << "the level is : " << b->level << endl;
}
