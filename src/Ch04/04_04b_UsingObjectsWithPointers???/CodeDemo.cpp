// Complete Guide to C++ Programming Foundations
// Exercise 04_04
// Using Objects with Pointers, by Eduardo Corpeño 
//如果你认为某些内容用当前资源难以理解，可以尝试其他资源，例如 YouTube

#include <iostream>
#include <string>
#include <chrono>  //this library contains classes to keep track of time

// Type aliases for chrono CLASSES!!
using Clock = std::chrono::system_clock; //system_clock CLASS
using TimePoint = std::chrono::time_point<Clock>;
using Duration = std::chrono::duration<double>;

int main(){
    TimePoint* start, *end;  //declare two OBJECTS of the TimePoint CLASS (start, end)
    Duration* elapsed_seconds = new Duration();  //declare, and initiate a pointer with the address
//Q1    //???????????????????????? the initializer here is an empty address
    //Duration -- class
    //*elapsed_seconds -- pointer that points to the address of the new object in class "Duration"
    //new Duration() -- new operator + constructor; constructor always have the same name as the class. new Duration() returns a pointer to the allocated memory

    std::string input;

    start = new TimePoint(Clock::now());  //initiate a declared pointer: ptr = new + constructor(initializer)
    //constructor also receives an initializer as an gargument
//Q1    // ??????????????????????? the initializer here is an address with an object

    // now() function is a static member function, so no object of the system clock class is required.

    //Static member function: A static member function in C++ is a function associated with the class itself, rather than with any specific instance (object) of that class. This means you can call a static member function even if you haven't created any objects of the class. 

    std::cout << "Type 'start' as quickly as you can and hit ENTER: " << std::flush; //flush allows the user to see the text immediately.
    std::cin >> input;

    end = new TimePoint(Clock::now());  //fuck you Eduardo
    *elapsed_seconds = *end - *start;  //assign object to the empty address "elapsed_seconds"

    std::cout << "Reaction time: " << elapsed_seconds->count() << "s" << std::endl; //FUCK
    
    delete start;   //free the memory address from the pointer
    delete end;
    delete elapsed_seconds;

    std::cout << std::endl << std::endl;
    return 0;
}
