#include <iostream>
using namespace std;
void update(int *p)
{
    *p = *p + 5;
   
}
int getSum(int *arr, int size)
{
    int sum = 0;
    int i = 0;
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    // cout << "sum :" << getSum(arr, 6) << endl;
    int num = 5;
    int *p = &num;

     update(p);
     cout << "num after update: " << num << endl;
     
}