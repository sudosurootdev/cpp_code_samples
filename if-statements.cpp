// Listing 4.4 - demonstrates if statement
// used with relational operators
#include <iostream>
int main() {
    int MetsScore, YankeesScore;
    std::cout << "Enter the score for the Mets: ";
    std::cin >> MetsScore;
    std::cout << std::endl;
    std::cout << "Enter the score for the Yankees: ";
    std::cin >> YankeesScore;
    std::cout << std::endl;

    if (MetsScore > YankeesScore)
        std::cout << "Let’s Go Mets!" << std::endl;

    if (MetsScore < YankeesScore)
        std::cout << "Go Yankees!" << std::endl;

    if (MetsScore == YankeesScore) {
        std::cout << "A tie? Naah, can’t be." << std::endl;
        std::cout << "Give me the real score for the Yanks: ";
	std::cin >> YankeesScore;

        if (MetsScore > YankeesScore)
            std::cout << "Knew it! Let’s Go Mets!" << std::endl;

        if (YankeesScore > MetsScore)
            std::cout << "Knew it! Go Yanks!" << std::endl;

        if (YankeesScore == MetsScore)
            std::cout << "Wow, it really was a tie!" << std::endl;
    }

    std::cout << "Thanks for telling me." << std::endl;;
    return 0;
}
