// Demonstrates typedef keyword
#include <iostream>

typedef unsigned short int USHORT; //typedef defined

int main()
{

using std::cout;
using std::endl;

USHORT Width = 5;
USHORT Length;
Length = 10;
USHORT Area = Width * Length;
cout << "Width: " << Width << endl;
cout << "Length: " << Length << endl;
cout << "Area: " << Area <<endl;
return 0;
}
