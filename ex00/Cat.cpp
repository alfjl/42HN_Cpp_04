#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Default constructor for Cat class called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    *this = other;
    std::cout << "Copy constructor for Cat class called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor for Cat class called" << std::endl;
}

Cat     &Cat::operator=(const Cat &src)
{
    Animal::_type = src.Animal::_type;
    std::cout << "Assignment overload for Cat class type " << this->Animal::_type << " called" << std::endl;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Cat purrrrrrs!!!!!" << std::endl;
}
