#include <iostream>
using namespace std;

void targetsum(int arr[], int size, int target)
{
    int i = 0, j = i + 1, k = j + 1;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            for (k = j + 1; k < size; k++)
            {
                {
                    int sum = arr[i] + arr[j] + arr[k];
                    if (sum == target)
                    {
                        cout << i << ", " << j << ", " << k << endl;
                    }
                }
            }
        }
    }
}
int main()
{

    int a[5] = {1, 2, 3, 4, 5};
    int target = 12;
    int size = sizeof(a) / sizeof(int);
    targetsum(a, size, target);
}