#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    int sum = 0, i = 0;
    for (i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout<< "Enter the elements of the array :" <<endl;
    cin >> arr[i];
    
    }
    cout<< sum(arr,5) <<endl;
    return 0;
}