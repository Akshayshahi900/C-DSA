#include <iostream>

using namespace std;

void sort(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j - 1)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        if (arr[j] == 1)
        {
            j--;
        }
        if (arr[i] == 1 && arr[j] == 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    for (i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
}

int main()
{
    int a[] = {1, 0, 1, 0, 1, 0};
    int size = sizeof(a) / sizeof(int);
    sort(a, size);
}