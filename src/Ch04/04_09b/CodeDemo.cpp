// Complete Guide to C++ Programming Foundations
// Exercise 04_09
// C Strings, by Eduardo Corpeño 

#include <iostream>
#include <cstring>

int main(){
    const size_t LENGTH = 50;
    char racer1[] = "Speedy";
    char racer2[LENGTH];
    char raceResult[LENGTH * 2];

    strncpy(racer2, "Lightning", sizeof(racer2) - 1);
    racer2[sizeof(racer2) - 1] = '\0';

    std::cout << "Racer 1: " << racer1 << std::endl;
    std::cout << "Racer 2: " << racer2 << std::endl;

    strncpy(raceResult, racer1, sizeof(raceResult)-1);
    const char space = ' ';
    strncpy(raceResult + sizeof(racer1) - 1, &space, sizeof(raceResult)-1-sizeof(racer1));
    strncpy(raceResult + sizeof(racer1), racer2, sizeof(raceResult) - 1 - sizeof(racer1));

    std::cout << raceResult << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
