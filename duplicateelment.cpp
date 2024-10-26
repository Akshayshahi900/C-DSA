#include <iostream>
using namespace std;
int duplicate(int arr[], int size)
{
    int i = 0;
    int ans = 0;
    int j = i + 1;
    while (i < size)
    {
        while (j < size)
        {
            ans = arr[i] ^ arr[j];
            if (ans == 0)
            {
                return arr[j];
            }
            else
            {
                j++;
            }
        }
        i++;
    }
}
int main()
{

    int arr[5] = { 22, 33, 22,1, 10};
    int arr2[5] = { 21, 21, 22,1, 10};
    int size = sizeof(arr2) / sizeof(int);
    cout << duplicate(arr2, size) << endl;
}
