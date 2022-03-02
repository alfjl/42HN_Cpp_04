#include "Ice.hpp"


Ice::Ice(void) : AMateria("ice")
{
    std::cout << "Default constructor Ice of type " << this->AMateria::_type << " called" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
    *this = other;
    std::cout << "Copy constructor Ice of type " << this->AMateria::_type << " called" << std::endl;
}

Ice::~Ice(void)
{
    std::cout << "Destructor Ice of type " << this->AMateria::_type << " called" << std::endl;
}

Ice &Ice::operator=(const Ice &src)
{
    this->AMateria::_type = src._type; // that's not needed, but what is?
    std::cout << "Assignment overload for Ice of type " << this->AMateria::_type << " called" << std::endl;
    return (*this);
}

std::string const   &Ice::getType() const
{
    return (this->AMateria::_type);
}

AMateria *Ice::clone(void) const
{
    Ice *clone = new Ice(*this);
    return (&clone);
}

void    Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
