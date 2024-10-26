#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> insertionsort(vector<int> &v, int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = v[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (v[j] > temp)
            {
                v[j + 1] = v[j];
            }
            else
            {
                break;
            }
        }
        v[j + 1] = temp;
    }
    return v;
}
int main()
{
    vector<int> v = {9, 7, 5, 3, 23, 72, 123, 68, 31, 365, 83, 13, 52, 123, 579};

    insertionsort(v, v.size());
    for (int k = 0; k < v.size(); k++)
    {
        cout << v[k] << ", ";
    }
}