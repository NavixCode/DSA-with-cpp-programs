#include <iostream>
#include <cmath> // For abs function

using namespace std;

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;
    
    // Handle negative numbers
    n = abs(n);
    
    int current_digit, largest = 0,smallest=n;  // Initialize largest to 0
    
    // Loop to find the largest digit
    while (n != 0) {
        current_digit = n % 10;
        n /= 10;
        if (current_digit > largest) {
            largest = current_digit;
        }
        if(current_digit<smallest){
            smallest=current_digit;
        }
    }
    
    cout << "Largest digit: " << largest <<"\nsmallest digit:"<<smallest<< endl;

    return 0;
}