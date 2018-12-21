// Listing 4.9 - demonstrates the conditional operator
//

#include <iostream>

int main() {

int x, y, z;
std::cout << "Enter two numbers." << std::endl;
std::cout << "First: " << std::endl;
std::cin >> x;
std::cout << "Second: ";
std::cin >> y;
std::cout << std::endl;

if (x > y)
    z = x;
else
    z = y;

std::cout << "After if test, z: " << z;
std::cout << std::endl;

z = (x > y) ? x : y;

std::cout << "After conditional test, z: " << z;
std::cout << std::endl;
return 0;
}
