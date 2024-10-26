#include <iostream>
using namespace std;
inline int getMax(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    int a, b;
    cout << "enter the values of a and b" << endl;
    cin >> a >> b;
    cout << "The maximum value is  " << getMax(a, b) << endl;
}