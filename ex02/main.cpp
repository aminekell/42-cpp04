#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // const Animal* meta = new Animal();    object of abstract class type "Animal" is not allowed
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    // meta->makeSound();  I don't have implementation of function makeSound because it's pure virtual functions
    // delete meta;  // Remove the delete because the object was not actually created 
    delete j;
    delete i;
    
    std::cout << "-----------------------------------------------------------" << std::endl;

    Animal* array[4];
    for (int i = 0; i < 4; i++)
        array[i] = NULL;

    for (int i = 0; i < 2; i++)
        array[i] = new Cat;

    std::cout << std::endl;
    
    for (int i = 2; i < 4; i++)
        array[i] = new Dog;

    std::cout << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete array[i];
        array[i] = NULL;
    }

    std::cout << "------------------------Orthodox Canonical Form--------------------" << std::endl;
    {
        // default constructor
        Dog orthodox;
        
        // copy constructor
        Dog form(orthodox);

        // copy assignment operator
        orthodox = form;

        // destructor
    }
    std::cout << "------------------------Deep Copy--------------------" << std::endl;
    {
        // If the program runs smoothly, deep copy works perfectly
        // !! Double free with shallow copy
        Dog test1;

        Dog test2 = test1;
    }
    return 0;
}