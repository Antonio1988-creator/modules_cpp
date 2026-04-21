#include "include/Bureaucrat.hpp"
#include "include/ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat boss("Boss", 100);  // Grado 100 <= 137, puede ejecutar
    ShrubberyCreationForm tree("mybackyard");
    
    boss.signForm(tree);
    boss.executeForm(tree);
    
    return 0;
}
