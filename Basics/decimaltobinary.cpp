#include <iostream>
#include <math.h>

using namespace std;

int decimaltobinary(int number)
{
    
    int ans = 0;
    int i=1;
    while (number != 0)
    {
         int bit = number & 1;

        ans = (bit * i) + ans;
        number = number >>1;
        i*=10;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << decimaltobinary(n);
}