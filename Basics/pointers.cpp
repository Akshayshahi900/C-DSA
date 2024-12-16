#include<iostream>
using namespace std;
int main(){
    int num = 6;
    int *ptr = &num;
    cout << "The value of num is: " << num << endl;
    cout << "The address of num is: " << ptr << endl;
    cout << "The value at the address of num is: " << *ptr << endl;
    cout << (*ptr)++ << endl;
    cout << (*ptr) << endl;
    int *q = ptr;
    cout << "The value of q is: " << q << endl;
    cout << "The value at the address of q is: " << *q << endl;
    *q = 10;
    cout << "The value of num is now: " << num << endl;
    cout << "The value at the address of num is: " << ptr << endl; 
    char ch[6] = "abcde";
    char *p2 = &ch[0];
    cout << "The address of ch is: " << *(p2) << endl;
    
    return 0;
}