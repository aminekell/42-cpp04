#include "Dog.hpp"

Dog::Dog() : Animal("Dog") , attribute(new Brain)
{
    std::cout << "Dog : Default Constructor Called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog : Destructor Called" << std::endl;
    delete this->attribute;
}
Dog::Dog(const Dog &src) : Animal(src), attribute(new Brain(*src.attribute))
{
    std::cout << "Dog : Copy Constructor Called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
    std::cout << "Dog : Copy Assignment Operator Called" << std::endl;
    if(this != &src)
    {
        Animal::operator=(src);
        delete this->attribute;
        this->attribute = new Brain(*src.attribute);
    }
    return *this;
}
void Dog::makeSound() const
{
    std::cout << "Woof :)" << std::endl;
}
