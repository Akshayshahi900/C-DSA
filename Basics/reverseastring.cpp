#include <iostream>
#include <bits/stdC++.h>
using namespace std;
int main()
{
    string s1;
    cin >> s1;
    int s = 0;
    int e = s1.length()-1;
    cout << s1 << endl;
    while (s <= e)
    {
        swap(s1[s++], s1[e--]);
    }
    cout<<s1;
}