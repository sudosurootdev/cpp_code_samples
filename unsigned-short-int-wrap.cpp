#include <iostream>
int main() {
    short int smallNumber;
    smallNumber = 32767;
    std::cout << "small number: " << smallNumber << std::endl;
    smallNumber++;
    std::cout << "small number: " << smallNumber << std::endl;
    smallNumber++;
    std::cout << "small number: " << smallNumber << std::endl;
    return 0;
}
