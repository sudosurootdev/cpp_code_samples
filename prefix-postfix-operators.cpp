// Listing 4.3 - demonstrates use of
// prefix and postfix increment and
// decrement operators
#include <iostream>
int main() {
    int myAge = 39; // initialize two integers
    int yourAge = 39;
    std::cout << "I am: " << myAge << " years old." << std::endl;
    std::cout << "You are: " << yourAge << " years old" << std::endl;
    myAge++; // postfix increment
    ++yourAge; // prefix increment
    std::cout << "One year passes..." << std::endl;
    std::cout << "I am: " << myAge << " years old." << std::endl;
    std::cout << "You are: " << yourAge << " years old" << std::endl;
    std::cout << "Another year passes" << std::endl;
    std::cout << "I am: " << myAge++ << " years old." << std::endl;
    std::cout << "You are: " << ++yourAge << " years old" << std::endl;
    std::cout << "Let’s print it again." << std::endl;
    std::cout << "I am: " << myAge << " years old." << std::endl;
    std::cout << "You are: " << yourAge << " years old" << std::endl;
    return 0;
}
