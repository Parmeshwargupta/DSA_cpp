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
    cout << "the health is : " << h1.gethealth() << endl;
    cout << "the level is : " << h1.level << endl;
    h1.sethealth(70);
    h1.level = 'A';
    cout << "the health is : " << h1.gethealth() << endl;
    cout << "the level is : " << h1.level << endl;
}
