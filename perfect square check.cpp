#include <iostream>
using namespace std;

int main(){
    int n, square = -1;
    bool isperfect = false;  // Initialized to false by default

    cout << "Write a number: ";
    cin >> n;

    for (int i = 0; i * i <= n; i++) {  // Loop till the square of i is less than or equal to n
        if (i * i == n) {
            isperfect = true;  // Mark it as a perfect square
            square = i;  // Store the square root
            break;
        }
    }

    // Output the result
    if (isperfect) {
        cout << n << " is a perfect square. Square root: " << square << endl;
    } else {
        cout << n << " is not a perfect square." << endl;
    }

    return 0;
}
