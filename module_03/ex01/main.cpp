#include "ScavTrap.hpp"

int main() {
    ScavTrap scav("Serena");

    scav.attack("Terminator");
    scav.guardGate();
    scav.takeDamage(30);
    scav.beRepaired(10);
    return 0;
}
