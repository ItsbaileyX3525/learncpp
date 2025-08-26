#include <iostream>
#include <cmath>

int main() {
    std::string food = "Pizza";

    std::string &meal = food;

    std::cout << food << std::endl;

    std::cout << meal << std::endl; //Why does this print pizza as well? I thought it was the mem pos

    meal = "Burger";

    std::cout << food << std::endl;

    std::cout << meal << std::endl; //????

    std::cout << &food << std::endl; //Confused

    return 0;
}