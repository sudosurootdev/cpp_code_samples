#include <iostream>
int main() {
    const int Sunday = 0;
    const int Monday = 1;
    const int Tuesday = 2;
    const int Wednesday = 3;
    const int Thursday = 4;
    const int Friday = 5;
    const int Saturday = 6;

    int today;
    today = Saturday;

    if (today == Sunday || today == Saturday)
        std::cout << "Gotta’ love the weekends!" << std::endl;
    else
        std::cout << "Back to work." << std::endl;

    return 0;
}
