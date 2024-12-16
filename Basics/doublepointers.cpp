#include <iostream>
using namespace std;

void update(int *ptr)
{
    *ptr = *ptr + 5;
    cout << "Value in main function: " << *ptr << endl;
}
int main()
{
    /*  int i = 18;
      int *ptr = &i;
      int **ptr2 = &ptr;
      int ***ptr3 = &ptr2;
      cout << "The value of i is : " << i << endl;
      cout << "address of i is : " << ptr << endl;
      cout << "Value at i :" << *ptr << endl;
      cout << "address of ptr :" << &ptr << endl;
      cout << "value at ptr2 :" << **ptr2 << endl;
    */
    int p = 5;
    int *ptr = &p;
    int **ptr2 = &ptr;
    update(ptr);
}