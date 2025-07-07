// Complete Guide to C++ Programming Foundations
// Exercise 05_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int score = 1023;
    bool gamePaused = false;
    char action = 'x';
    
    if (score > 1000)
        std::cout << "Score over 1000" << std::endl;
    

    if (score % 2) //if the result is 0, it's false. Anyother numbers mean true. You don't have to use this way
        std::cout << "Score is odd" << std::endl;
    else
        std::cout << "Score is even" << std::endl;

    
    std::cout << "The action '" << action << "' is "; //unconditional
    if (action != 'a' && action != 'w' && action != 'd' && action != 's' &&
        action != 'A' && action != 'W' && action != 'D' && action != 'S') //use paranthesis for multiple lines
        std::cout << "not ";
    std::cout << "a movement key." << std::endl; //unconditional

    if (gamePaused)
        std::cout << "The game is paused!" << std::endl;
    else
        std::cout << "The game is running!" << std::endl;
    

    std::cout << std::endl << std::endl;
    return 0;
}
