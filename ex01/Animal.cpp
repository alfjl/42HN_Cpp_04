#include <iostream>
#include "Animal.hpp"


Animal::Animal(void) : _type("Animal")
{
    std::cout << "Default constructor for Animal class called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Argument constructor for Animal class type " << this->_type << " called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    *this = other;
    std::cout << "Copy constructor for Animal class called" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Destructor for Animal class " << this->_type << " called" << std::endl;
}

Animal  &Animal::operator=(const Animal &src)
{
    this->_type = src._type;
    std::cout << "Assignment overload for Animal class type " << this->_type << " called" << std::endl; 
    return (*this);
}

void    Animal::makeSound(void) const {}

std::string     Animal::getType(void) const
{
    return (this->_type);
}

Brain   *Animal::getBrain(void) const { return (nullptr); }
void    Animal::setIdea(const std::string idea) { idea.empty(); }
