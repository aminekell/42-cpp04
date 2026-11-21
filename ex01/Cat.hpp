#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal{
    private: 
        Brain *attribute;
    public :
        Cat();   
        Cat(const Cat &src);
        ~Cat();
        Cat &operator=(const Cat &src);
        void makeSound() const ;
};

#endif