// Complete Guide to C++ Programming Foundations
// Exercise 04_03
// How Arrays and Pointers are Related, by Eduardo Corpeño 

#include <iostream>

int main(){
    int highScores[] = {850, 745, 1220, 990};  // High scores in various game stages
    int *scorePtr = highScores;   // Pointer initialized to the address of the array
                                  //don't need to use ampersand here because the array variable is a memory address

    std::cout << "Initial high score: " << *scorePtr << std::endl;  // Display the first high score using pointer

    std::cout<<"Second score using pointer: " << *(scorePtr + 1)<<std::endl;//first way
    std::cout<<"3rd score using bracket notation: " << scorePtr[2] << std::endl;//second way
    //pointer can be used like an array (in other words arrays and pointers behave the same)
    std::cout << std::endl << std::endl;
    return 0;
}
