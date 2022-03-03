#include <iostream>
#include "Cure.hpp"


Cure::Cure(void) : AMateria("cure")
{
    std::cout << "Default constructor Cure of type '" << this->AMateria::_type << "' called" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
    *this = other;
    std::cout << "Copy constructor Cure of type '" << this->AMateria::_type << "' called" << std::endl;
}

Cure::~Cure(void)
{
    std::cout << "Destructor Cure of type '" << this->AMateria::_type << "' called" << std::endl;
}

Cure &Cure::operator=(const Cure &src)
{
    AMateria::operator=(src);
    std::cout << "Assignment overload for Cure of type '" << this->AMateria::_type << "' called" << std::endl;
    return (*this);
}

std::string const   &Cure::getType() const
{
    return (this->AMateria::_type);
}

AMateria *Cure::clone(void) const
{
    return (new Cure(*this));
}

void    Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
