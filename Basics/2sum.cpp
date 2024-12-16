#include <iostream>
using namespace std;

void targetsum(int arr[], int size, int target)
{
int i =0 ,j = i+1;
for(i=0;i<size;i++){
    for(j=i+1; j<size ; j++){
        int sum = arr[i] +arr[j];
        if(sum== target){
            cout << i  <<"  " <<j <<endl;
        }
    }
}
}

int main()
{

    int a[5] = {1, 2, 3, 4, 5};
    int target = 7;
    int size = sizeof(a) / sizeof(int);
    targetsum(a,size,target);  
}