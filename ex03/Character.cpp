
#include "Character.hpp"
Character::Character() : name("default"), floor_idx(0)
{
    for(int i = 0; i < 4; i++)
        inventory[i] = NULL;
    for(int i = 0; i < 100; i++)
        floor[i] = NULL;
}

Character::~Character()
{
    for(int i = 0; i < 4 ; i++)
    {
        delete inventory[i];
        inventory[i] = NULL;
    }
    for(int i = 0; i < 100 ; i++)
    {
        delete floor[i];
        floor[i] = NULL;
    }
}

Character &Character::operator=(const Character &src)
{
    if(this !=  &src)
    {
    for(int i = 0;  i < 4 ;i++)
    {
        delete this->inventory[i];
        this->inventory[i] = NULL;
    }

    for(int i = 0;  i < 100 ;i++)
    {
        delete this->floor[i];
        this->floor[i] = NULL;
    }

    this->name = src.name;
    this->floor_idx = src.floor_idx;
    for(int i = 0 ; i < 4; i++) {
        if(src.inventory[i])
            this->inventory[i] = src.inventory[i]->clone();
    }
    for(int i = 0; i < src.floor_idx ; i++){
        if(src.floor[i])
            this->floor[i] = src.floor[i]->clone();
    }
    }
    return *this;                  
}

Character::Character(const Character &src) : name(src.name), floor_idx(0)
{
    for(int j = 0 ; j < 4; j++)
        this->inventory[j] = NULL;
    for(int i = 0; i < 100; i++)
        floor[i] = NULL;
    for(int i = 0; i < 4 ; i++)
    {
        if(src.inventory[i])
            this->inventory[i] = src.inventory[i]->clone();
    }
}

Character::Character(std::string name) : name(name), floor_idx(0)
{
    for(int i = 0; i < 4; i++)
        inventory[i] = NULL;
    for(int i = 0; i < 100; i++)
        floor[i] = NULL;
}

std::string const & Character::getName() const{
    return this->name;
}

void Character::equip(AMateria* m){
    if(!m)
        return ;
    for(int i = 0; i < 4 ; i++)
        if(!inventory[i])
        {
            inventory[i] = m;
            return;
        }
    delete m;
}

void Character::unequip(int idx){

if(idx < 0 || idx >= 4) 
    return ;
if(!inventory[idx]) 
    return ;
if(floor_idx < 100)
    floor[floor_idx++] = inventory[idx];
inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
if(idx < 0 || idx >= 4) 
    return ;
if(!inventory[idx]) 
    return ;
inventory[idx]->use(target);
}