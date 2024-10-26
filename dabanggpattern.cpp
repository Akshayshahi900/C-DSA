#include <iostream>
using namespace std;

int main()
{

    int i, j, n, count;
    i = 1;
    n = 5;
    count = 1;
    while (i <= n)
    {
        j = 1;

        
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j++;
        }
        j=1;
       // printing stars 
       while(j<=i-1){
        cout << "* " ;
        j++;
       }
       j=1;
       while(j<=i-1){
        cout << "* ";
        j++;
       }
       
       while(j<=5){
         cout << (n-j+1 ) << " ";
         j++;
         
       }
       

        cout << endl;
        i++;
    }
}