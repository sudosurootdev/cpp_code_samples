// Listing 4.8 - demonstrates proper use of braces
// in nested if statements
#include <iostream>
int main() {
    int x;
    std::cout << "Enter a number less than 10 or greater than 100: ";
    std::cin >> x;
    std::cout << "\n";

    if (x >= 10) {
        if (x > 100)
            std::cout << "More than 100, Thanks!\n";
    }
    else // fixed!
        std::cout << "Less than 10, Thanks!\n";
    return 0;
}
