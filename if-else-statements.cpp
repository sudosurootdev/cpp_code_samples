// Listing 4.5 - demonstrates if statement
// with else clause
#include <iostream>
int main() {

    int firstNumber, secondNumber;

    std::cout << "Please enter a big number: ";
    std::cin >> firstNumber;
    std::cout << std::endl;

    std::cout << "Please enter a smaller number: ";
    std::cin >> secondNumber;
    std::cout << std::endl;

    if (firstNumber > secondNumber)
    std::cout << "Thanks!" << std::endl;
    else
    std::cout << "Oops. The first number is not bigger!" << std::endl;

    return 0;
}
