#include <iostream>
using namespace std;

int main() {
    int decimal, binary = 0, place = 1;
    
    // Input the decimal number
    cout << "Enter a decimal number: ";
    cin >> decimal;

    int n = decimal;  // Store the original decimal number for later use

    // Perform the conversion
    while (n > 0) {
        int remainder = n % 2;     // Get the remainder (0 or 1)
        binary += remainder * place;  // Update the binary result
        n /= 2;                    // Divide the number by 2
        place *= 10;               // Move to the next place in binary (ones, tens, etc.)
    }

    // Output the result
    cout << "Binary equivalent of " << decimal << " is: " << binary << endl;

    return 0;
}
