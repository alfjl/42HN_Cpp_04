#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Default constructor for Dog class called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    *this = other;
    std::cout << "Copy constructor for Dog class called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor for Dog class called" << std::endl;
}

Dog     &Dog::operator=(const Dog &src)
{
    Animal::_type = src.Animal::_type;
    std::cout << "Assignment overload for Dog class type " << this->Animal::_type << " called" << std::endl;
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Dog barks!!!!!" << std::endl;
}
