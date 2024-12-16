#include<iostream>
using namespace std;



void sort(int arr[],int size){
    int i=0;
    int j=i+1;
    int k=j+1;
    while(i<j){
        while(j<k){
            if(arr[k]==2){
                k++;
            }
            if(arr[k]==1 && arr[j] ==2){
                
            }
        }
    }
}
int main(){

    int arr[7]={0,2,1,2,1,0,0};
    int size = sizeof(arr)/sizeof(int);

    sort(arr,size);

}