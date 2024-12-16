#include <iostream>

using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1;

    // Print the first two terms (0 and 1)
    cout << a << " " << b << " ";

    // Iterate from 3 to n (inclusive)
    for (int i = 3; i <= n; ++i) {
        int next_num = a + b;
        cout << next_num << " ";

        // Update a and b for the next iteration
        a = b;
        b = next_num;
    }
}

int main() {
    int n;
    cout << "Enter the number of Fibonacci terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        fibonacci(n);
    }
 return 0;
     
}