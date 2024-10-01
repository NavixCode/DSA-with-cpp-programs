#include<iostream>
using namespace std;

int main() {
    int arr[9] = {2,3,3,4,5,5,7,8};
    int f_element = 0, scount = 0;

    // Loop through the array elements
    for (int i = 0; i < 9; i++) {
        f_element = arr[i];
        scount = 0;

        // Check for duplicates and mark them as 0
        for (int j = 0; j < 9; j++) {
            if (arr[j] == f_element) {
                scount++;
            }
            // If the element appears more than once, mark it as 0
            if (scount > 1) {
                arr[j] = 0;
            }
        }
    }

    // Output the array after removing duplicates
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
