#include <iostream>
using namespace std;
int firstoccurence(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int m = s + (e - s) / 2;
    int result =-1;

    while (s <= e)
    {
        if (arr[m] == key)
        {   result = m;
            e = m - 1;
        }
        if (arr[m] < key)
        {
            s = m + 1;
        }
        if (arr[m] > key)
        {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }
    return result;
}
int lastoccurence(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int m = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[m] == key)
        {
            s = m + 1;
        }
        if (arr[m] < key)
        {
            s = m + 1;
        }
        if (arr[m] > key)
        {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }
    return m;
}
int main()
{
    int arr[] = {1, 2, 3, 3, 3, 3, 4, 4, 4, 5}; 
    cout << "First occurence: " << firstoccurence(arr, 10, 3) << endl;
    cout << "Last occurence: " << lastoccurence(arr, 10, 3) << endl;
}