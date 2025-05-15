#include <iostream>

int main() {
    int baseDamage = 50;
    int strength = 20;
    int criticalHitMultiplier = 2;
    int damageDealt = baseDamage * (strength / 10 + 1) * criticalHitMultiplier;
    std::cout << "Damage Dealt: " << damageDealt << std::endl;
    return 0;
}
