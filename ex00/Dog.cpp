#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog : Default Constructor Called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog : Destructor Called" << std::endl;
}
Dog::Dog(const Dog &src) : Animal(src)
{
    std::cout << "Dog : Copy Constructor Called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
    std::cout << "Dog : Copy Assignment Operator Called" << std::endl;
    Animal::operator=(src);
    return *this;
}
void Dog::makeSound() const
{
    std::cout << "Woof :)" << std::endl;
}
