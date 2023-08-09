// this is a comment
// Name of programmer: Dennis Mohle
// Date: Aug 9, 2023
// someProgram.cpp

#include <iostream>

using namespace std;

int main() {
    cout << "\n\nWelcome to the addition program!\n\n";

    // This is a comment.
    // This input section prompts the user for two whole (integer) numbers.

    int num1 = 0;
    int num2 = 0;
    int theSum = 0;
    int theProduct = 0;

    // Get the first number from the user
    cout << "\n Please enter the first number...";
    cin >> num1;

     // Get the second number from the user
    cout << "\n Please enter the second number...";
    cin >> num2;

    // Add the two numbers...
    theSum = num1 + num2;

    // Output the sum!
    cout << "\n\n The sum is " << theSum << "! \n\n";

    // Processing
    theProduct = num1 * num2;

    // Output the product
    cout << "\n\n The product is " << theProduct << "! \n\n";



return 0;
}

