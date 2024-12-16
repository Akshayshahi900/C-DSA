#include <iostream>
using namespace std;

int sum(int *arr, int size)
{
    int ans = 0;
    if (size == 0)
    {
        return ans;
    }
    ans = arr[0] + sum(arr + 1, size - 1);
    return ans;
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
    int size = 10;
    cout << sum(arr, size);
}