#include<iostream>
using namespace std;
void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swapalternate(int arr[], int size){
    int i=0 ;
    for(i=0 ;i<size-1;i=i+2){
        int var = arr[i];
        arr[i]= arr[i+1];
        arr[i+1] = var;

    }
}
int main(){

     int arr[6] = {1, 3, -9, 4, -12, -4};
    int brr[5] = {13, 356, 42, 133, -41};

    cout << "array before" <<endl;
    printarr(arr,6);
    printarr(brr , 5);

    cout << "array after alternate swap" <<endl;
    swapalternate(arr,6);
    swapalternate(brr,5);

    printarr(arr,6); 
    printarr(brr,5); 
}