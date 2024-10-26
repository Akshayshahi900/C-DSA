#include <iostream>
using namespace std;
// This function finds the lowest element in the rotated array.
int pivotarr(int arr[], int size)
{

    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <e)
    {
        mid = s + (e - s) / 2;
        // if this condition is true then the smallest element is in the right part of the array
        if (arr[mid] > arr[e])
        {
            s = mid + 1;
        }
        else // otherwise the element is in the left part of the rotated array
        {
            e = mid;
        }
    }
    return s;
} 
int main()
{
    int arr[8] = {7, 8, 9, 10, 2, 3, 4, 5}; // Here the input is a rotated array

    cout << "Pivot element is :" << pivotarr(arr, 8);
}