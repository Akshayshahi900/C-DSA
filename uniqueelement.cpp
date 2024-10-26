/*this algorithm only works for only one unique element in a single array
more than one unique element and no unique element is not in the constraint of the input */
#include <iostream>
using namespace std;

int unique(int arr[], int size)
{
    int i = 0;

    int ans = 0;

    for (i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr1[5] = {2, 0, 3, 2, 3};
    int arr2[5] = {2, 1, 3, 2, 4};
    int arr3[5] = {2, 1, 5, 2, 4};
    cout << unique(arr1, 5) << endl;
}