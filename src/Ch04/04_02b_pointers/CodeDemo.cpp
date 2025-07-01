// Complete Guide to C++ Programming Foundations
// Exercise 04_02
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a = 37;
    int *ptr; //it has the value located in the memory address the ptr is pointing to

    ptr = &a;  // &a is the memory address of a, so is ptr
               // ptr is a variable that holds address

    std::cout << "             The value of a is " << a << std::endl;

    std::cout << "    ptr is pointing to address " << ptr << std::endl;
    std::cout << "           The address of a is " << &a << std::endl;

    std::cout << "Where ptr is pointing, we have " << *ptr << std::endl;

    std::cout << "         The address of ptr is " << &ptr << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
