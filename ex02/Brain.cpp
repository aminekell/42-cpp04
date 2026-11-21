#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

Brain::Brain()
{
    std::cout << "Brain : Default Constructor Called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain : Destructor Called" << std::endl;
}
Brain::Brain(const Brain &src)
{
    std::cout << "Brain : Copy Constructor Called" << std::endl;
    for(int i = 0; i < 100 ; i++)
        this->ideas[i] = src.ideas[i];
}

Brain &Brain::operator=(const Brain &src)  
{
    std::cout << "Brain : Copy Assignment Operator Called" << std::endl;
    for(int i = 0; i < 100 ; i++)
        this->ideas[i] = src.ideas[i];
    return *this;
}
