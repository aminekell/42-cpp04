#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    AMateria *inventory[4];
    std::string name;
    AMateria *floor[100];
    int floor_idx;
public:

//ortodox canonical form
    Character();
    Character(std::string name);
    ~Character();
    Character &operator=(const Character &src);
    Character(const Character &src);
//interface implimentations 
std::string const & getName() const;
void equip(AMateria* m) ;
void unequip(int idx);
void use(int idx, ICharacter& target);
};

#endif