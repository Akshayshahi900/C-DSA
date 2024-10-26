#include<iostream>
using namespace std;

int func(int n){
    int sum = 0;
         int product =1;
         int number = n;
         
         while(n!=0){
         sum = sum + (n %10);
         n= n/10;
         }


         while( number!=0){
            product = product * (number%10);
            number= number/10;
         }
         return (product - sum );
}

int main(){

    int n ;
    int value;
    cin >> n;

      value = func(n);
      cout << value <<endl;


}