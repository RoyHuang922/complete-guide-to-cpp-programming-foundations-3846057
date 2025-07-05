// Complete Guide to C++ Programming Foundations
// Exercise 04_09
// C Strings, by Eduardo Corpeño 

#include <iostream>
#include <cstring>  // from C standard library

int main(){
    const size_t LENGTH = 50;  //size_t: type used to record length only (kind of useless)
    char racer1[] = "Speedy";  // declaring a character array. length not specified. By initializing with a constat string, the length of the array is automatically set to 6 + 1 = 7
    char racer2[LENGTH];
    char raceResult[LENGTH * 2];

    strncpy(racer2, "Lightning", sizeof(racer2) - 1);
    //strncpy copy a string into a buffer (ex: racer2) (kind of like append()) 
    //strncpy (buffer, string to copy, max number of characters to copy => sizeOfArray - 1)
    //function sizeof()  !!!

    racer2[sizeof(racer2) - 1] = '\0';  //add a terminator for precaution

    std::cout << "Racer 1: " << racer1 << std::endl;
    std::cout << "Racer 2: " << racer2 << std::endl;

    strncpy(raceResult, "Roy says the winner is: ", sizeof(raceResult) - 1);
    racer2[sizeof(raceResult) - 1] = '\0';  //be safe

    strncat(raceResult, racer1, sizeof(raceResult) - strlen(raceResult) - 1);
    //strncat(destination array which is the container, second array, max size of the character to add) --- concatenation operation
    //sizeof() vs strlen()

    std::cout << raceResult << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
