#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s)
{
    int length = s.length();
    int start = 0;
    int end = length - 1;
    while (start <= end)
    {
        if (s[start] == s[end])
        {
            start++;
            end--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    string s1 = "niou123uoin";
    string s2 = "niouuoin";
    if (checkPalindrome(s1))
    {
        cout << "The string " << s1 << " is a palindrome string." << endl;
    }
    else if (!checkPalindrome(s1))
    {
        cout << "The string " << s1 << " is NOT a palindrome string." << endl;
    }
    if (checkPalindrome(s2))
    {
        cout << "The string " << s2 << " is a palindrome string." << endl;
    }
    else if (!checkPalindrome(s2))
    {
        cout << "The string " << s2 << " is NOT a palindrome string." << endl;
    }
    return 0;
}