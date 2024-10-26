#include <iostream>

#include <bits/stdc++.h>
using namespace std;

vector<int> sorting(vector<int> &v, int n)
{
    int i, j, minimum;
    for (i = 0; i < n - 1; i++)
    {
        minimum = i;
        for (j = i + 1; j < n; j++)
        {
            if (v[j] < v[minimum])
            {
                minimum = j;
            }
        }
        // libary function to swap in a vector. 
        swap(v[minimum], v[i]);
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