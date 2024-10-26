#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int key, int size)
{
    int low = 0;
    int high = size - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(int arr[], int key, int size)
{
    int low = 0;
    int high = size - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, 12, 23, 43, 56, 76, 87};
    int key = 9;
    int size = sizeof(arr) / sizeof(int);

    cout << "First occurrence: " << firstOccurrence(arr, key, size) << endl;
    cout << "Last occurrence: " << lastOccurrence(arr, key, size) << endl;

    return 0;
}