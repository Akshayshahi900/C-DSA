#include <iostream>
using namespace std;
int sqrt(long long int num)
{
    int low = 0, high = num;
    int mid = low + (high - low) / 2;
    long long int square;
    int ans = -1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        square = mid * mid;
        if (square == num)
        {
            return mid;
        }
        if (square < num)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        { // Eliminate the right half
            high = mid - 1;
        }
    }
    return ans;
}
double moreprecision(int num, int precision, int tempsolution)
{
    double factor = 1;
    double ans = tempsolution;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < num; j = factor + j)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    long long int num;
    cout << "Enter the number: ";
    cin >> num;
    double tempsol = sqrt(num);
    int precision;
    cout << "Enter the no of decimal: " << endl;
    cin >> precision;
    cout << "The squareroot is : " << moreprecision(num, precision, tempsol) << endl;
}