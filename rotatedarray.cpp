#include <iostream>
using namespace std;
// This function finds the lowest element in the rotated array.
int pivot(int arr[], int size)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] > arr[end])
        {
            start = mid + 1;
        }
        if (arr[mid] < arr[end])
        {
            end = mid;
        }
    }
    return start;
}
int binarysearch(int arr[], int size, int high, int low, int key)
{
    int mid = low + (high - low) / 2;
    while (low < high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            low = mid + 1;
        }
        if (arr[mid] > key)
        {
            high = mid - 1;
        }
    }
}
int main()
{
    int arr[8] = {7, 8, 9, 10, 1, 2, 3, 4}; // The input is a rotated array.
    int size = sizeof(arr)/sizeof(int);
    int pivotindex = pivot(arr, size);
    cout << pivotindex << endl;
    int key = 7; // This is the element we have to find in the rotated array.
    if (arr[pivotindex] == key)
    {
        cout << "The element is at index: " << binarysearch(arr, size, (size - 1), pivotindex, key);
    }
    if (key >= arr[pivotindex] && key <= arr[size-1])
    {
        cout << "The element is at index: " << binarysearch(arr, size, (size - 1), pivotindex, key);
    }
    else
    {
        cout << " The element is at index:" << binarysearch(arr, size, (pivotindex - 1), 0, key);
    }
}
