//bubble sort is a stable algorithm.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> sorting(vector<int> &v, int n)
{
    int i, j;
    bool swapped = false;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            // the vector is already sorted.
            break;
        }
    }
    return v;
}
int main()
{
    vector<int> v = {8, 5, 3, 1, 34, 56, 2, 51};
    // if you are storing it in the original vector then no need to pass the address of the vector in the function.
    //  v = sorting(v, v.size());
    sorting(v, v.size());
    for (int k = 0; k < v.size(); k++)
    {
        cout << v[k] << endl;
    }
}