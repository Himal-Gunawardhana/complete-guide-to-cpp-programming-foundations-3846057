#include <iostream>
#include <string>

inline int calculateDamage(int baseDamage, int modifier){
    return baseDamage + modifier;
}

int main(){
    int totalDamage = calculateDamage(50, 10);
    std::cout << "Total Damage: " << totalDamage << std::endl;
    return 0;
}
