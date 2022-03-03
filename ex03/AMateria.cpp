#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(void) : _type("AMateria")
{
    std::cout << "Default constructor AMateria of type '" << this->_type << "' called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "Argument constructor AMateria of type '" << this->_type << "' called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
    *this = other;
    std::cout << "Copy constructor AMateria of type '" << this->_type << "' called" << std::endl;
}

AMateria::~AMateria(void)
{
    std::cout << "Virtual destructor AMateria of type '" << this->_type << "' called" << std::endl;
}

AMateria            &AMateria::operator=(const AMateria &src)
{
    this->_type = src._type;
    std::cout << "Assignment overload for AMateria of type '" << this->_type << "' called" << std::endl;
    return (*this);
}

std::string const   &AMateria::getType() const
{
    return (this->_type);
}

void        AMateria::use(ICharacter &target)
{
    std::cout << "* " << target.getName() << " used in AMateria *" << std::endl;
}
