#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat : Default Constructor Called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat : Destructor Called" << std::endl;
}
Cat::Cat(const Cat &src) : Animal(src)
{
    std::cout << "Cat : Copy Constructor Called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)  
{
    std::cout << "Cat : Copy Assignment Operator Called" << std::endl;
    Animal::operator=(src);
    return *this;
}
void Cat::makeSound()  const
{
    std::cout << "Meow :)" << std::endl;
}
