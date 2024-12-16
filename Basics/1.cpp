#include <iostream>
using namespace std;

int main()
{
    int n;
    n = 4;
    int i = 0;
    int j = 1;
    while (i < n)
    {
        j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
}
