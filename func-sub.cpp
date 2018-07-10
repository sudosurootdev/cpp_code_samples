#include <iostream>

int Add (int first, int second) {
    std::cout << "In Add(), received " << first << " and " << second << std::endl;
    return (first + second);
}

int Subtract(int first, int second) {
    std::cout << "In Subtract(), received " << first << " and " << second << std::endl;
    return (first - second);
}

int main() {
    std::cout << "I'm in main()!" << std::endl;
    int a, b, c;
    std::cout << "Enter two numbers: ";
    std::cin >> a;
    std::cin >> b;
    std::cout << std::endl;
    std::cout << "Calling Add()" << std::endl;
    c=Add(a,b);
    std::cout << "c was set to " << c << std::endl;
    std::cout << "Back in main()" << std::endl;
    std::cout << "Calling Subtract()" << std::endl;
    c=Subtract(a,b);
    std::cout << "c was set to " << c << std::endl;
    std::cout << "Exiting..." << std::endl;
    std::cout << std::endl;
    return 0;
}
