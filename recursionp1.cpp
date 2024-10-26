#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0)
        return;

    cout << n << endl;
    print(n - 1);
}
int power(int n)
{
    if (n == 0)
        return 1;

    return 2 * power(n - 1);
}
long long int factorial(int n)
{
    // if (n == 0)
    //     return 1;

    return n * factorial(n - 1);
}
int main()
{
    int n;
    cin >> n;
    // long long int ans = factorial(n);
    // cout << "Factorial is :" << ans << endl;
    int powerAns = power(n);

    cout << "The power of 2 is :" << powerAns << endl;
    print(n);
}
