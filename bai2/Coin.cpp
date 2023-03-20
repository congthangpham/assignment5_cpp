#include "Coin.h"
#include <cstdlib> // for rand and srand
#include <ctime> // for time

Coin::Coin() {  
    srand(static_cast<unsigned int>(time(0)));
    toss();
}

void Coin::toss() {
   
    if (rand() % 2 == 0) {
        sideUp = "heads";
    } else {
        sideUp = "tails";
    }
}

std::string Coin::getSideUp() const{
    return sideUp;
}
