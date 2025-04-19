#include "ClapTrap.hpp"

int main() {
    ClapTrap clap("RoboCop");
    
    clap.attack("Terminator");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.takeDamage(15); // HP llega a 0
    clap.attack("Terminator"); // No debería funcionar
    return 0;
}
