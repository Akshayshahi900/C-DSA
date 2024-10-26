#include <iostream>
using namespace std;
#define PI 3.14
#define AREA(l, b) (l * b) // replaces the the first AREA(l,b) with (l*b)
// chain macro
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138

// multiline macro
#define ELE 1, \
            2, \
            3

#define max(a, b) ((a > b) ? a : b)

int main()
{
    // int r;
    // cout << "Enter the radius of the circle: ";
    // cin >> r;
    // cout << "The area of the circle is: " << PI * r * r << endl;
    // int l, b;
    // cin >> l >> b;
    // cout << "The area of the rectangle is: " << AREA(l, b) << endl;
    cout << INSTAGRAM << endl;
    int arr[] = {ELE};
    for (int i = 0; i < 3; i++)
    {
        printf("%d  ", arr[i]);
    }
    int a = 18;
    int b = 76;

    printf("Minimum value between"
           " %d and %d is %d\n",
           a, b, max(a, b));
    return 0;
}