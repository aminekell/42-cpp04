#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
    std::string type;
public:
    //constructor param
    AMateria(std::string const &type);
    std::string const &getType() const; // Returns the materia type
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
    //default constructor
    AMateria();
    //destructor
    virtual ~AMateria();
    //copy assingment operator
    AMateria &operator=(const AMateria &src);
    //copy constructor
    AMateria(const AMateria &src);
};

#endif