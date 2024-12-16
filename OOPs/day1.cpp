#include <iostream>
// #include "Hero.cpp"
using namespace std;

class Hero
{
public:
    char *name;
    char level;
    int health;

    void print()
    {
        cout << "Name: " << this->name << endl;
        cout << "Level: " << this->level << endl;
        cout << "Health: " << this->health << endl;
    }

    // constructor
    Hero()
    {
        cout << "Constructor called!!" << endl;
    }

    // copy constructor
    Hero(Hero &temp)
    { 
        
    }
};

int main()
{

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