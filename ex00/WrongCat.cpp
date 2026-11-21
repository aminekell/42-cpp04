#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat : Default Constructor Called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "WrongCat : Parameterize Constructor Called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat : Destructor Called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
    std::cout << "WrongCat : Copy Constructor Called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)  
{
    std::cout << "WrongCat : Copy Assignment Operator Called" << std::endl;
    WrongAnimal::operator=(src);
    return *this;
}
void WrongCat::makeSound()  const
{
    std::cout << "Meow :)" << std::endl;
}
