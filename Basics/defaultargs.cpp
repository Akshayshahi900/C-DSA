#include <iostream>
using namespace std;
void print(int arr[], int size, int start = 0)
{

    for (int i = start; i < size; i++)
    {
        cout << arr[start] << " ";
    }
}
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;
    print(arr, n ,5);
}
