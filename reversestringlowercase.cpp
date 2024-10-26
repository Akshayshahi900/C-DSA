#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "ABCD,:123";
    string temp ="";
    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            char ch = (str[i] - 'A') + 'a';
            temp.push_back(ch);
        }
         if (str[i] >= 'a' && str[i] <= 'b')
        {
            
            temp.push_back(str[i]);
        }
         if (str[i] >= 0 && str[i] <= 9)
        {
            
            temp.push_back(str[i]);
        }
        
    }
    cout<<temp;
}