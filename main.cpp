#include <iostream>
#include <cmath>

int main() {
    std::string food = "Pizza";

    std::string* ptr = &food;

    std::cout << food << std::endl;

    std::cout << &food << std::endl;

    std::cout << ptr << std::endl;


    std::cout << *ptr << std::endl;

    return 0;
}