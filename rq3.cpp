#include <iostream>
using namespace std;
int sqrt(int num)
{
    int start = 0;
    int high = num;
    long long int mid = start + (high - start) / 2;

    long long square = mid * mid;
    int ans = -1;
    while (start <= high)
    {
        mid = start + (high - start) / 2;
        square = mid * mid;

        if (square == num)
        {
            return mid;
        }
        if (square < num)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {

            high = mid - 1;
        }
    }
    return ans;
}
double moreprecision(int num, int tempSol, int precision)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < num; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{

    int num;
    cout << "Enter the number: ";
    cin >> num;

    int tempSol = sqrt(num);
    int precision;
    cout << "Enter the precision: ";
    cin >> precision;
    cout << "The answer is: " << moreprecision(num, tempSol, precision) << endl;
}