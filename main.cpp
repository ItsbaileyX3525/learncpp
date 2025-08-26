#include <iostream>
#include <cmath>

int main() {
    enum Difficulty {
        LOW,
        MEDIUM,
        HARD
    };

    enum Difficulty myVar = LOW; //low = 0, Med = 1 and high = 3?

    std::cout << myVar;
    return 0;
}