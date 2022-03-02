#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "Default constructor MateriaSource called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_templates[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    *this = other;
    std::cout << "Copy constructor MateriaSource called" << std::endl;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_templates[i] != nullptr)
            delete (this->_templates[i]);
    }
    std::cout << "Destructor MateriaSource called" << std::endl;
}


MateriaSource   &MateriaSource::operator=(const MateriaSource &src)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_templates[i] != nullptr)
        {
            delete (this->_templates[i]);
            this->_templates[i] = nullptr;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (src._templates[i] != nullptr)
            this->_templates[i] = src._templates[i]->clone();
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_templates[i] == nullptr)
        {
            this->_templates[i] = m;
            std::cout << " New Materia type " << m->getType() << " learned and stored at index " << i << std::endl;
            return ;
        }
    }
}

AMateria*   MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_templates[i]->getType() == type)
            return (this->_templates[i]->clone());
    }
    return (NULL);
}
