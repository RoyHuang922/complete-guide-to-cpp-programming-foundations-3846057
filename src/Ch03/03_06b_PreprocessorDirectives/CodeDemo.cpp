// Complete Guide to C++ Programming Foundations
// Exercise 03_06
// Preprocessor Directives (指令), by Eduardo Corpeño 

#include <iostream>  // #include directive is used to insert the referenced file into your code replacing the directive line
#include <cstdint>  //<cstdint> provides fixed size definitions for interger types

#define MAX_AMMO 500  //every time the preprocessor finds the symbol, MAX_AMMO, it will replace it with 500
#define DEBUG  //DEBUG is a preprocessor macro. It's used as a trigger for "#ifdef" directive

int main(){
    int32_t ammo = 100;  //signed 32-bit integer.
    uint8_t health_items = 5; //unsigned 8-bit interger

#ifdef DEBUG  //!! If the "DEBUG" macro was defined, then include the following block of code
    std::cout << "[DEBUG} starting game simulation" << std::endl;
#endif  

    ammo += 200; // Player finds extra ammo
    health_items -= 2; // Player uses some health items

    std::cout << "Final Ammo: " << ammo << std::endl;
    std::cout << "Remaining Health Items: " << (int) health_items << std::endl;  //int32_t is actually a char

    std::cout << std::endl << std::endl;
    return 0;
}
