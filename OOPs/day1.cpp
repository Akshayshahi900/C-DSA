#include <iostream>
// #include "Hero.cpp"
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    // getter
    int getHealth()
    {
        return health;
    }

    // setter
    void setHealth(int h)
    {
        health = h;
    }
};

int main()
{
    Hero ramesh;

    // static allocation
    // Hero Akshay;

    // // dynamic allocation
    // Hero(*bahubali) = new Hero;
    // (bahubali)->level = 'C';
    // (bahubali)->setHealth(90);
    // cout << "Level is :" << bahubali->level << endl;
    // cout << "Health is :" << bahubali->getHealth() << endl;

    // Akshay.setHealth(90);
    // // cout << "Akshay health is :" << Akshay.getHealth() << endl;

    // Akshay.level = 'A';
    // // cout << "The Health is :" << Akshay.getHealth() << endl;
    // // cout << "The level is :" << Akshay.level << endl;
}