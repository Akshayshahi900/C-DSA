#include <iostream>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello Akshay Shahi" << endl;
    }
    int sayHello(char name)
    {
        cout << "Hello Akshay Shahi" << endl;
    }
    void sayHello(string name)
    {
        cout << "Hello Akshay Shahi" << endl;
    }
};
class B
{
public:
    int a;
    int b;

public:
    // default add function
    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {
        // int value1 = this->a;
        // int value2 = obj.a;
        // cout << "Output" << value2 - value1 << endl;

        cout << "HELLO Akshay" << endl;
    }

    void operator()()
    {
        cout << "Main Bracket Hu" << this->a << endl;
    }
};

class Animal
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    Dog obj;
    obj.speak();

    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    obj1();

    // A obj;
    // obj.sayHello();

    return 0;
}