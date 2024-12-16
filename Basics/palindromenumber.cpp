#include <iostream>
using namespace std;
bool isPalindrome(int x)
{   int num = x;
    int rev = 0;
    int digit;
    int i = 1;
    while (x != 0)
    {
        digit = x % 10;
        rev = (digit * i) + rev;
        x = x / 10;
        i = i * 10;
    }
    cout <<rev;
    if (num == rev)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main(){
    int n=13;
   if( isPalindrome(n)){
   cout << "Yes ";
   }
}