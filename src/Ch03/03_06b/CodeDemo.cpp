// Complete Guide to C++ Programming Foundations
// Exercise 03_06
// Preprocessor Directives, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

//#define DEBUG

#define AMMO_PACK_AMOUNT 200
#define HEALTH_COST 2

constexpr int32_t initialAmmo = 100;
constexpr uint8_t initialHealthItems = 5;

int main(){
    int32_t ammo = initialAmmo;
    uint8_t health_items = initialHealthItems;

#ifdef DEBUG
    std::cout << "Starting";
#endif

    ammo += AMMO_PACK_AMOUNT; // Player finds extra ammo
    health_items -= HEALTH_COST; // Player uses some health items

    std::cout << "Final Ammo: " << ammo << std::endl;
    std::cout << "Remaining Health Items: " << (int) health_items << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
