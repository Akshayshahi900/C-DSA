#include <iostream>
using namespace std;

void merge(int arr1[], int m , int arr2[], int n , int arr3[]){
    int i =0 ;
    int j=0;
    int k=0;
    while(i<m && j<n){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
            
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i<m){
        arr3[k++] = arr1[i++];
    }
    while(j<n){
        arr3[k++] = arr2[j++];
    }
}

void print(int arr3[],int size){
    for(int i =0 ; i<size;i++){
        cout<<arr3[i]<<endl;
    }
}



int main(){
int arr1[5]= {1,2,5,6,8};
int arr2[4]= {3,4,7,9};
int arr3[9]={0};

merge(arr1, 5,arr2 ,4 ,arr3);
print(arr3,9);
}