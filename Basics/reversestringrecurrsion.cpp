#include <iostream>
using namespace std;
void reverse(string &str, int i, int j)
{
    cout << "recursive call pattern: " << str << endl;
    if (i > j)
    {
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;

    // recursive call
    reverse(str, i, j);
}
int main()
{
    string name = "abcde";
    cout << "Original string: " << name << endl;

    reverse(name, 0, name.length() - 1);
    cout << "Answer String: " << name << endl;
}