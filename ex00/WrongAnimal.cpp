#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal : Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << "WrongAnimal : Parameterize Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal : Destructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) : type(src.type)
{
    std::cout << "WrongAnimal : Copy Constructor Called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    std::cout << "WrongAnimal : Copy Assignment Operator Called" << std::endl;
    this->type = src.type;
    return *this;
}
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal : Default Sound" << std::endl;
}
std::string WrongAnimal::getType() const
{
    return this->type;
}
