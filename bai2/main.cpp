#include "Coin.h"
#include <iostream>

int main() {
    Coin coin;
    std::cout << "The side facing up initially is " << coin.getSideUp() << std::endl;

    int headsCount = 0;
    int tailsCount = 0;

    for (int i = 0; i < 20; i++) {
        coin.toss();
        std::cout << "Toss " << (i + 1) << ": " << coin.getSideUp() << std::endl;

        if (coin.getSideUp() == "heads") {
            headsCount++;
        } else {
            tailsCount++;
        }
    }

    std::cout << "Heads count: " << headsCount << std::endl;
    std::cout << "Tails count: " << tailsCount << std::endl;

    return 0;
}
