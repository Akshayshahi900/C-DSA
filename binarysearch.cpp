#include <iostream>
using namespace std;

int binarysearch(int arr[], int key, int size)
{
    int mid, high, low = 0;
    high = size - 1;
    mid = low + (high -low)/2;
    while (low <= high)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }

        mid = low + (high -low)/2;
    }
    return -1;
}
int main()
{
    int a[] = {3, 4, 6, 34, 78, 98, 233};
    int size = sizeof(a) / sizeof(int);
    int key = 98;

    cout << "Key is : " << binarysearch(a, key, size);
}