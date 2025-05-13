#include <iostream>
#include <string>

constexpr int calculateExperience(int level){
    return level * level * 100;
}

int main(){
    constexpr int experience = calculateExperience(5);
    std::cout << "Experience for level 5: " << experience << std::endl;
    return 0;
}