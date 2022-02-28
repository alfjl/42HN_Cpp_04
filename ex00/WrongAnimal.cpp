#include <iostream>
#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
    std::cout << "Default constructor for WrongAnimal class called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "Argument constructor for WrongAnimal class type " << this->_type << " called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    *this = other;
    std::cout << "Copy constructor for WrongAnimal class called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "Destructor for WrongAnimal class " << this->_type << " called" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &src)
{
    this->_type = src._type;
    std::cout << "Assignment overload for WrongAnimal class type " << this->_type << " called" << std::endl; 
    return (*this);
}

void    WrongAnimal::makeSound(void) const { std::cout << "WRONG_ANIMAAAAAAAAAALLLLLL!!!!!" << std::endl; }

std::string     WrongAnimal::getType(void) const
{
    return (this->_type);
}
