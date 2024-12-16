#include <iostream>
using namespace std;

int setbit(int a, int b)
{
    int count = 0;
    while ((a != 0) || (b != 0))
    {

        if ((a & 1) == 1)
        {
            count++;
        }
        a = a >> 1;
        if ((b & 1) == 1)
        {
            count++;
        }
        b = b >> 1;
    }
    return count;
}
int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int totalbits = setbit(num1, num2);
    cout << totalbits;
}