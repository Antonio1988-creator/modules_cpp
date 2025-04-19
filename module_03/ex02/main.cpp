#include "FragTrap.hpp"

int main() {
    FragTrap frag("Bender");

    frag.attack("Terminator");
    frag.highFivesGuys();
    frag.takeDamage(50);
    frag.beRepaired(20);
    return 0;
}
