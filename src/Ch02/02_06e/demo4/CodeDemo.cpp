#include <iostream>
void generateUniqueID(){
    static int id = 0; // Static local variable
    ++id;
    std::cout << "Generated ID: " << id << std::endl;
}

int main(){
    generateUniqueID(); // Output: Generated ID: 1
    generateUniqueID(); // Output: Generated ID: 2
    generateUniqueID(); // Output: Generated ID: 3
    return 0;
}
