// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc};

struct GameCharacter
{
    std::string name;
    character_role role;
    unsigned char level;
};


int main(){
    GameCharacter buddy;
    buddy.name = "caarls";
    buddy.role = character_role::sidekick;
    buddy.level = 10;
    std::cout << buddy.name;
    
    std::cout << std::endl << std::endl;
    return 0;
}
