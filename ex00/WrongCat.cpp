#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "Default constructor for WrongCat class called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    *this = other;
    std::cout << "Copy constructor for WrongCat class called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor for WrongCat class called" << std::endl;
}

WrongCat     &WrongCat::operator=(const WrongCat &src)
{
    WrongAnimal::_type = src.WrongAnimal::_type;
    std::cout << "Assignment overload for WrongCat class type " << this->WrongAnimal::_type << " called" << std::endl;
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "WrongCat purrrrrrs!!!!!" << std::endl;
}
