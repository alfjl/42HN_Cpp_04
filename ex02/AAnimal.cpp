#include <iostream>
#include "AAnimal.hpp"


AAnimal::AAnimal(void) : _type("AAnimal")
{
    std::cout << "Default constructor for AAnimal class called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
    std::cout << "Argument constructor for AAnimal class type " << this->_type << " called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
    *this = other;
    std::cout << "Copy constructor for AAnimal class called" << std::endl;
}

AAnimal::~AAnimal(void)
{
    std::cout << "Destructor for AAnimal class " << this->_type << " called" << std::endl;
}

AAnimal  &AAnimal::operator=(const AAnimal &src)
{
    this->_type = src._type;
    std::cout << "Assignment overload for AAnimal class type " << this->_type << " called" << std::endl; 
    return (*this);
}

void    AAnimal::makeSound(void) const {}

std::string     AAnimal::getType(void) const
{
    return (this->_type);
}

Brain   *AAnimal::getBrain(void) const { return (nullptr); }
void    AAnimal::setIdea(const std::string idea) { idea.empty(); }
