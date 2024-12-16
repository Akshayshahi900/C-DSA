#include <iostream>
#include <bits/stdC++.h>
using namespace std;
int maxOccurence(int count[])
{
    int max = INT_MIN;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
        }
    }
    return max;
}
int main()
{
    int count[26] = {0};
    string s1;
    cin >> s1;
    for (int i = 0; i < s1.length(); i++)
    {
        int ch = s1[i] - 'a';
        count[ch]++;
    }
    for (int j = 0; j < 26; j++)
    {
        cout << count[j] << " " << endl;
    }

    cout << "Max occurence is: " << maxOccurence(count) << endl;
}