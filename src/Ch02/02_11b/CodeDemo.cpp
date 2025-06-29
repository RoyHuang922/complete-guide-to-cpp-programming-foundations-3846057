// Complete Guide to C++ Programming Foundations
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    celsius = (static_cast<float>(5) / 9.0) * (fahrenheit - 32);   // (int 5) / (int 9) = 0

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    float weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl;
    std::cout << "Integer part   : " << static_cast<int>(weight) << std::endl;
    std::cout << "Fractional part: " << (double)((weight - (int)weight) * 10000) << std::endl; 
    //by converting float  to int, 
    // all decimal places are removed. no rounding

    std::cout << std::endl << std::endl;
    return 0;
}
