// Complete Guide to C++ Programming Foundations
// Challenge 04_11
// Vector Manipulation, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>

std::vector<int> SelectKeyPoints(std::vector<int> distances, int checkpointIndex){
    std::vector<int> result;

    result.push_back(*distances.begin());  //add first element (iterator <=> pointer)
    result.push_back(distances[checkpointIndex]);
    result.push_back(distances.back());
    
    return result;
}

int main(){
    std::vector<int> distances = {3, 5, 4, 6, 7, 8};
    int checkpointIndex = 4;

    std::vector<int> learnerResult = SelectKeyPoints(distances, checkpointIndex);
    std::cout << "Your code returned: { ";
    auto vectPtr = learnerResult.begin(); //returns an iterator POINTING (returns a pointer address) to the first element of a container.
    while (vectPtr != learnerResult.end()){ //returns an iterator POINTING to the theoretical element that follows the last element in the container.
        std::cout << *vectPtr << " ";
        vectPtr = next(vectPtr, 1); 
    }
    std::cout << "}" << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
