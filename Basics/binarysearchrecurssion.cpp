#include <iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k)
{
    int mid = s + (e - s) / 2;
    // base case
    if (s > e)
    {
        return false;
    }
    if (arr[mid] == k)
    {
        return true;
    }
    if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, e, k);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, k);
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
    int size = 10;
    bool ans = binarySearch(arr, 0, size - 1, 4);
    if (ans)
    {
        cout << "element found";
    }
    else
    {
        cout << "element not found";
    }
}