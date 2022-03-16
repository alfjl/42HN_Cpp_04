#include <iostream>
#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog")
{
    std::cout << "Default constructor for Dog class called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
    this->_brain = nullptr;
    *this = other;
    std::cout << "Copy constructor for Dog class called" << std::endl;
}

Dog::~Dog(void)
{
    delete (this->_brain);
    std::cout << "Destructor for Dog class called" << std::endl;
}

Dog     &Dog::operator=(const Dog &src)
{
    if (this != &src)
    {
        AAnimal::_type = src.AAnimal::_type;
        std::cout << "Assignment overload for Dog class type " << this->AAnimal::_type << " called" << std::endl;
        delete (this->_brain);
        if (src.getBrain() != nullptr)
            this->_brain = new Brain(*src.getBrain());
        else
            this->_brain = nullptr;
    }
    return (*this);
}

AAnimal     &Dog::operator=(const AAnimal &src)
{
    if (this != &src)
    {
        this->AAnimal::_type = src.getType();
        std::cout << "Assignment overload(AAnimal) for AAnimal::Dog class type " << this->AAnimal::_type << " called" << std::endl;
        if (this->_brain != nullptr)
            delete (this->_brain);
        this->_brain = new Brain(*src.getBrain());
    }
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Dog barks!!!!!" << std::endl;
}

Brain   *Dog::getBrain(void) const
{
    return (this->_brain);
}

void    Dog::setIdea(const std::string idea)
{
    *(this->_brain)->_ideas = idea;
}
