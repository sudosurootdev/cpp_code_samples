#include <iostream>

int Add (int first, int second) {
    std::cout << "In Add(), received " << first << " and " << second << std::endl;
    return (first + second);
}

int main() {
    std::cout << "I'm in main()!" << std::endl;
    int a, b, c;
    std::cout << "Enter two numbers: ";
    std::cin >> a;
    std::cin >> b;
    std::cout << "\nCalling Add()" << std::endl;
    c=Add(a,b);
    std::cout << "Back in main()" << std::endl;
    std::cout << "c was set to " << c << std::endl;
    std::cout << "Exiting..." << std::endl;
    std::cout << std::endl;
    return 0;
}
