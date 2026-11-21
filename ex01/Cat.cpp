#include "Cat.hpp"

Cat::Cat() : Animal("Cat") , attribute(new Brain) 
{
    std::cout << "Cat : Default Constructor Called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat : Destructor Called" << std::endl;
    delete this->attribute;
}
Cat::Cat(const Cat &src) : Animal(src) , attribute(new Brain(*src.attribute))
{
    std::cout << "Cat : Copy Constructor Called" << std::endl;
}

Cat &Cat::operator=(const Cat &src){
    std::cout << "Cat : Copy Assignment Operator Called" << std::endl;
    if(this != &src)
    {
        Animal::operator=(src);
        delete this->attribute;
        this->attribute = new Brain(*src.attribute);
    }
    return *this;
}
void Cat::makeSound()  const
{
    std::cout << "Meow :)" << std::endl;
}
