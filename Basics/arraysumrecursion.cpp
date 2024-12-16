#include <iostream>
using namespace std;
bool linearSearch(int *arr, int size, int key)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 10;
    if (linearSearch(arr, 10, key))
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }
}