#include <iostream>
using namespace std;

bool checkPalindrome(string &str, int i, int j)
{
    if (i > j)
        return true;

    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return checkPalindrome(str, i + 1, j - 1);
    }
}
int main()
{
    string str = "akshay";
    bool isPalindrome = checkPalindrome(str, 0, str.length() - 1);
    if (isPalindrome)
    {
        cout << "Yes it is palindrome" << endl;
    }
    else
    {
        cout << "No it is not a palindrome." << endl;
    }
}