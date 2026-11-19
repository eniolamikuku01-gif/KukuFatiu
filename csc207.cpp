#include <iostream>

using namespace std;

int main() {
    int num;

    // Ask the user for input
    cout << "Enter an integer: ";
    cin >> num;

    // Check if the number is divisible by 2
    if (num % 2 == 0) {
        cout << num << " is Even." << endl;
    } else {
        cout << num << " is Odd." << endl;
    }

    return 0;
}