// Listing 4.6 - a complex nested
// if statement
#include <iostream>
int main() {
    // Ask for two numbers
    // Assign the numbers to bigNumber and littleNumber
    // If bigNumber is bigger than littleNumber,
    // see if they are evenly divisible
    // If they are, see if they are the same number

    int firstNumber, secondNumber;
    std::cout << "Enter two numbers.\nFirst: ";
    std::cin >> firstNumber;
    std::cout << "\nSecond: ";
    std::cin >> secondNumber;
    std::cout << "\n\n";

    if (firstNumber >= secondNumber) {
        if ( (firstNumber % secondNumber) == 0) { // evenly divisible?
            if (firstNumber == secondNumber)
                std::cout << "They are the same!\n";
            else
                std::cout << "They are evenly divisible!\n";
        }
        else
            std::cout << "They are not evenly divisible!\n";
    }
    else
    std::cout << "Hey! The second one is larger!\n";
    return 0;
}
