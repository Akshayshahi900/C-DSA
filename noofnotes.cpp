#include<iostream>
using namespace std;



void notes(int a){
int n100 =0;
int n50 =0;
int n10=0;

   n100 = a/100;
   a= a%100;
   n50 = a/50;
   a = a%50;
   n10 = a/10;
   
 cout << "No of 100 rupees notes " << n100 <<endl ;
 cout << "No of 50 rupees notes " << n50 <<endl ;
 cout << "No of 10 rupees notes " << n10 <<endl ;



}
int main(){

    int amount ;
    cin>> amount;
    notes(amount);
}