#include<iostream>
using namespace std;
int main(){
    char name[20];
    int count =0;
    cin>>  name ;
    int i =0;
   while(name[i] != '\0'){
    count++;
    i++;
   }
cout << "The length of the string is: "<<count;
}
