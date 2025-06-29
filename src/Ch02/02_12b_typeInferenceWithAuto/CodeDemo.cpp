// Complete Guide to C++ Programming Foundations
// Exercise 02_12
// Type Inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>  //!!

int main(){
    auto score = 8; //assign automatic type (require a initializer)
    auto points = 12345678901;  //long type
    auto height = 6.2f; //floating point number(f is constant specifier of float)
    auto duration = 90.0; //without tailing f; floating point constants are doubles by default 
    auto is_active = true;
    auto initial = 'p';   // char
    auto title = "Soccer Champion";  //PKc - pointer to const char (fancy name for string)

    std::cout << "The type of score is " << typeid(score).name() << std::endl;
    std::cout << "The type of points is " << typeid(points).name() << std::endl;
    std::cout << "The type of height is " << typeid(height).name() << std::endl;
    std::cout << "The type of duration is " << typeid(duration).name() << std::endl;
    std::cout << "The type of is_active is " << typeid(is_active).name() << std::endl;
    std::cout << "The type of initial is " << typeid(initial).name() << std::endl;
    std::cout << "The type of title is " << typeid(title).name() << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
