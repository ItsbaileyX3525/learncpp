#include <iostream>
#include <cmath>

int main() {
    struct {
        int myNum;
        std::string myString;
    } myStructure;

    myStructure.myNum = 1;
    myStructure.myString = "Test thing";

    std::cout << myStructure.myNum << std::endl;
    std::cout << myStructure.myString << std::endl;
    return 0;
}