// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

int main(){
    const size_t LEVEL_COUNT = 4; //size_t is an unsigned integer type used to represent the size of objects in bytes or the count of elements in a container.

    int enemies[LEVEL_COUNT]; //four indice within range: 0-3
    enemies[0] = 10;
    enemies[1] = 15;
    enemies[2] = 20;
    enemies[3] = 25;

    float levelDifficulty[] = {1.0,3.5,6.0,10.5}; //don't need to specify range in this case

    std::cout << "The game has " << LEVEL_COUNT << " levels:" << std::endl;
    std::cout << "Level 1: " << enemies[0] << " enemies" << std::endl;
    std::cout << "Level 2: " << enemies[1] << " enemies" << std::endl;
    std::cout << "Level 3: " << enemies[2] << " enemies" << std::endl;
    std::cout << "Level 4: " << enemies[3] << " enemies" << std::endl;

    std::cout << std::endl;
    std::cout << "Level difficulties are set as follows:" << std::endl;
    std::cout << "Level 1: " << levelDifficulty[0] << std::endl;
    std::cout << "Level 2: " << levelDifficulty[1] << std::endl;
    std::cout << "Level 3: " << levelDifficulty[2] << std::endl;
    std::cout << "Level 4: " << levelDifficulty[3] << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}
