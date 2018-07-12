#include <iostream>

int main() {
    std::cout << "The size of an int is:\t\t"
    << sizeof(int) << " bytes." << std::endl;
    std::cout << "The size of a short int is:\t"
    << sizeof(short) << " bytes." << std::endl;
    std::cout << "The size of a long int is:\t"
    << sizeof(long) << " bytes." << std::endl;
    std::cout << "The size of a char is:\t\t"
    << sizeof(char) << " bytes." << std::endl;
    std::cout << "The size of a float is:\t\t"
    << sizeof(float) << " bytes." << std::endl;
    std::cout << "The size of a double is:\t"
    << sizeof(double) << " bytes." << std::endl;
    std::cout << "The size of a bool is:\t\t"
    << sizeof(bool) << " bytes." << std::endl;
    return 0;
}
