#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}
Animal::Animal(const Animal &src) : type(src.type)
{
    std::cout << "Animal Copy Constructor Called" << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
    std::cout << "Animal Copy Assignment Operator Called" << std::endl;
    this->type = src.type;
    return *this;
}
void Animal::makeSound() const
{
    std::cout << "Animal Default Sound" << std::endl;
}
std::string Animal::getType() const
{
    return this->type;
} 

Animal::Animal(const std::string type) : type(type)
{
    std::cout  << "Animal  Parametrized Constructor" << std::endl;
}
