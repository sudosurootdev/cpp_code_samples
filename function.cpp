#include <iostream>

// function Demonstration Function
// prints out a useful message
void DemonstrationFunction()
{
std::cout << "In Demonstration Function" << std::endl;
}

// function main - prints out a message, then
// calls DemonstrationFunction, then prints out
// a second message.
int main()
{
std::cout << "In main" << std::endl;
DemonstrationFunction();
std::cout << "Back in main" << std::endl;
return 0;
}
