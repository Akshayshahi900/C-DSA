#include <iostream>
using namespace std;

void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void revarr(int arr[], int size)
{
    int i = 0;
    for (i = 0; i < size - i; i++)
    {
        int var = 0;
        var = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = var;
    }
}

int main()
{
    int arr[6] = {1, 3, -9, 4, -12, -4};
    int brr[5] = {13, 356, 42, 133, -41};

    cout << "array before reversal " << endl;
    printarr(arr, 6);
    printarr(brr, 5);

    revarr(arr, 6);
    revarr(brr, 5);

    cout << "array after reversal " << endl;
    printarr(arr, 6);
    printarr(brr, 5);
}