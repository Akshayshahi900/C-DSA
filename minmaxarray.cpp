#include<iostream>
using namespace std;


int getmax(int arr[],int size){
    int max= INT16_MIN;
    int i;
    for(i=0; i<size ;i++){
        if(arr[i] > max){
            max= arr[i];
        }
    }
    return max;
}
int getmin(int arr[],int size){
    int min= INT16_MAX;
    int i;
    for(i=0; i<size ;i++){
        if(arr[i] < min){
            min= arr[i];
        }
    }
    return min;
}
int main(){
   int arr[]={2,4,6,7,8};
   cout << "maximum element is :" << getmax(arr,5) <<endl;
   cout << "minimum element is :" << getmin(arr,5) <<endl;
}