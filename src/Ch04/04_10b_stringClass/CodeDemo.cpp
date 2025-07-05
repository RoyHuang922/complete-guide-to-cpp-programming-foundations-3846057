// Complete Guide to C++ Programming Foundations
// Exercise 04_10
// The String Class, by Eduardo Corpeño 

#include <iostream>
#include <string>  //!!

int main(){
    std::string racer1 = "Speedy";  //don't have to worry about size. string class automatically handles memory management
    std::string racer2 = "Lightning";
    std::string raceResult;

    raceResult = "And the winner is " + racer1; //concatenate with + sign (similar to python)

    std::cout << raceResult << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
