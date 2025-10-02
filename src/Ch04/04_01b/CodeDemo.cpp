// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

int main(){
    constexpr size_t numErnies = 4;
    int ernemies[numErnies];
    float difficulty[] = {1.0f, 1.5, 2.8, 4};

    ernemies[0] = 1;
    ernemies[1] = 2;
    ernemies[2] = 2;
    ernemies[3] = 2;
    
    for (int i=0; i<numErnies; ++i) {
        std::cout << ernemies[i] << " at diff:" << difficulty[i] << std::endl;
    }


    std::cout << std::endl << std::endl;
    return 0;
}
