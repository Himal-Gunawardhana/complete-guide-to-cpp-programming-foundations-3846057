// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>

int main(){
    std::vector<std::string> checkpoints = {"Start","Forest","Castle"};

    checkpoints.push_back("Cave");
    checkpoints.push_back("Finish");

    std::cout << "The game has " << checkpoints.size() << " checkpoints." << std::endl;
    std::cout << "Display index 2 element: " << checkpoints[2] << std::endl;
    checkpoints[2] = "Dark souls";
    std::cout << "Updated index 2 element is: " << checkpoints[2] << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
    
}
