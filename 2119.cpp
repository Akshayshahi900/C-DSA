#include<iostream>
using namespace std;
 int rev (int num ){
    int digit1 ,digit2;
    
        int rev1 = 0;
        int rev2 = 0;

        while (num != 0) {
            digit1 = num % 10;
            num = num / 10;
            rev1 = (rev1 * 10) + digit1;
        }

        while (rev1 != 0) {
            digit2 = rev1 % 10;
            rev1 = rev1 / 10;
            rev2 = (rev2 * 10) + digit2;
        }

       return rev2;
 }
 int main()
 {
    int n ;
     cin>> n ;
  int rev2 = rev(n);
   if(rev2 == n){
    cout << " yes ";
   }
   else cout << "no";
 }