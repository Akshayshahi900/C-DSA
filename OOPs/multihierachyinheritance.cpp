#include <iostream>
using namespace std;
// hierarcial Inheritance
class A
{
public:
    void func1()
    {
        cout << "Inside the function1" << endl
             << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "Inside the function2" << endl
             << endl;
    }
};

class C : public A
{
public:
    void func3()
    {
        cout << "Inside the function3" << endl
             << endl;
    }
};

int main()
{
    A object1;
    object1.func1();

    B object2;
    object2.func1();
    object2.func2();

    C object3;
    object3.func1();
    object3.func3();

    return 0;
}
