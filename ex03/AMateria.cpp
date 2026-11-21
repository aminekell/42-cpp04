#include "AMateria.hpp"

//Constructor param
AMateria::AMateria(std::string const &type) : type(type)
{
}
//getter
std::string const &AMateria::getType() const
{
    return this->type;
} // Returns the materia type

void AMateria::use(ICharacter &target)
{
    std::cout << "this the default use by * " << target.getName() << " *" << std::endl;
}
//Default Constructor
AMateria::AMateria() : type("Default")
{
}
//Destructor 
AMateria::~AMateria()
{
}
//Copy assinment operator
AMateria &AMateria::operator=(const AMateria &src)
{
    (void)src;
    return *this;
}

//Copy Constructor
AMateria::AMateria(const AMateria &src) : type(src.type)
{
}