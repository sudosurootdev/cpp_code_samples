#include <iostream>
int main() {
    enum Days { Sunday, Monday, Tuesday,
        Wednesday, Thursday, Friday, Saturday };

    Days today;
    today = Saturday;

    if (today == Sunday || today == Saturday)
        std::cout << "Gotta’ love the weekends!" << std::endl;
    else
        std::cout << "Back to work." << std::endl;

    return 0;
}
