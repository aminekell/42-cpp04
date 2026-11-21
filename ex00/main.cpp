#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;

j->makeSound(); //will output the cat sound!
i->makeSound();
meta->makeSound();
delete meta;
delete i;
delete j;

std::cout << "--------------------------------------------" << std::endl;

const WrongAnimal* a = new WrongAnimal();
const WrongAnimal* b = new WrongCat();

std::cout << a->getType() << " " << std::endl;
std::cout << b->getType() << " " << std::endl;
a->makeSound();
b->makeSound();
delete a;
delete b;

std::cout << "-----------Orthodox Canonical Form----------" << std::endl;
{
//default constructor
    Animal orthodox;


//parametrized Constructor
    Animal Canonical("Name");


//copy constructor
    Animal form(Canonical);


//copy assinment operator
    orthodox = Canonical;


//destructor
}

return 0;
}        