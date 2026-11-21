#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main() 
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
   
    tmp = src->createMateria("cure");
    me->equip(tmp);

    // Try to equip invalid materia
    tmp = src->createMateria("not valid");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);
    std::cout << "----------------------------------------------------------------" << std::endl;
    
    // Try to use materia not in the list (invalid indices)
    me->use(2020, *bob);
    me->use(-123, *bob);
    
    // Try to unequip materia 
    me->unequip(0);
    me->unequip(1);
    
    delete bob;
    delete me;
    delete src;

    return 0;
}