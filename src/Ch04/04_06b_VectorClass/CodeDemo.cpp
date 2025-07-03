// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

#include <vector> //importing vector header
#include <iostream>
#include <string>

int main(){
    std::vector<std::string> checkpoint = {"Start", "Forest", "Castel"};//std::vector<type>+Var = initializer
    //vector has two ends: front end and back end. We only insert elements through the back end

    std::cout << checkpoint.size() << std::endl;

    //insert elements:
    checkpoint.push_back("Cave");
    checkpoint.push_back("Finish");

    std::cout << checkpoint.size() << std::endl;
    std::cout << checkpoint[2] << std::endl;

    checkpoint[2] = "ROY!";
    std::cout << checkpoint[2] << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
