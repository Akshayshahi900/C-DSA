#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(5);
    v.push_back(1);
    v.push_back(6);
    v.push_back(34);
    v.push_back(167);
    vector<int> ans = reverse(v);
    print(ans);
}