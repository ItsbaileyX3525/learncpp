#include <iostream>
#include <cmath>

int main() {
    std::string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "A", "B", "C", "D" },
    };

    //prints the memory location?
    //std::cout << letters << std::endl;

    std::cout << letters[1][2] << std::endl;
    return 0;
}