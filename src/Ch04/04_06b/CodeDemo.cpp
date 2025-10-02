// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>
#include <ranges>

int main(){
    std::vector<std::string> checkpoints = {"Start", "Forest", "Castle"};

    checkpoints.push_back("Lake");

    for (const std::string& point : checkpoints) {
        std::cout << point << std::endl;
    }

    std::cout << std::endl << std::endl;
    return 0;
}
