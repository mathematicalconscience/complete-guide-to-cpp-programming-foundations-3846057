// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float tar_x;
    int32_t sprite_x;
    uint32_t player_x;

    tar_x = -123.5;
    sprite_x = tar_x;
    player_x = sprite_x;

    std::cout << "float: " << tar_x << std::endl;
    std::cout << "int32_t: " << sprite_x << std::endl;
    std::cout << "uint32_t: " << static_cast<int32_t>(player_x) << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
