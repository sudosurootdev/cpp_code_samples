#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;
    std::cout << std::endl;
    std::cout << "Please enter your birth month (ex. 1 - 12): ";
    int month;
    std::cin >> month;
    std::cout << std::endl;
    if (month > 12 || month <= 0) {
	std::cerr << "You must enter a correct month (1 - 12)!!!" << std::endl;
	std::cout << std::endl;
    }
    std::cout << "Please enter your birth day (ex. 1 - 31): ";
    int day;
    std::cin >> day;
    std::cout << std::endl;
    if (day > 31 || day <= 0) {
        std::cerr << "You must enter a correct day (1 - 31)!!!" << std::endl;
        std::cout << std::endl;
    }
    std::cout << "Please enter your birth year (ex. 1900 - 2018): ";
    int year;
    std::cin >> year;
    std::cout << std::endl;
    if (year > 2018 || year <= 0) {
        std::cerr << "You must enter a correct year (1900 - 2018)!!!" << std::endl;
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "My name is: " << std::endl;
    std::cout << name << std::endl;
    std::cout << std::endl;
    std::cout << "I was born on: " << std::endl;
    std::cout << month << "/" << day << "/" << year << std::endl;
    std::cout << std::endl;
    return 0;
}
