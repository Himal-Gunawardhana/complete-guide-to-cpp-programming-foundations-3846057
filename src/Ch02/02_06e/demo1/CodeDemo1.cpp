#include <iostream>
#include <string>

 void displayScore(const std::string& playerName){
    std::cout << "Player: " << playerName << std::endl;
}

 int main(){
    std::string name = "Hero";
    displayScore(name);
    return 0;
}