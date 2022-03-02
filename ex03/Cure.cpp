#include "Cure.hpp"


Cure::Cure(void) : AMateria("ice")
{
    std::cout << "Default constructor Cure of type " << this->AMateria::_type << " called" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
    *this = other;
    std::cout << "Copy constructor Cure of type " << this->AMateria::_type << " called" << std::endl;
}

Cure::~Cure(void)
{
    std::cout << "Destructor Cure of type " << this->AMateria::_type << " called" << std::endl;
}

Cure &Cure::operator=(const Cure &src)
{
    this->AMateria::_type = src._type; // that's not needed, but what is?
    std::cout << "Assignment overload for Cure of type " << this->AMateria::_type << " called" << std::endl;
    return (*this);
}

std::string const   &Cure::getType() const
{
    return (this->AMateria::_type);
}

AMateria *Cure::clone(void) const
{
    Cure *clone = new Cure(*this);
    return (&clone);
}

void    Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
