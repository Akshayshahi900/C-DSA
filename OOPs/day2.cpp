#include <iostream>
using namespace std;
class Animal
{

public:
    int age;

    void speak()
    {
        cout << "Speaking " << endl;
    }
};

class Dog : public Animal
{
public:
    int weight;
};
class Puppy : public Dog
{
};

int main()
{

    Dog d;
    d.speak();
    Puppy p;
    cout << p.weight << endl;
    cout << p.age << endl;

    return 0;
}