#include <iostream>
#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Default constructor for Dog class called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
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
        Animal::_type = src.Animal::_type;
        std::cout << "Assignment overload for Dog class type " << this->Animal::_type << " called" << std::endl;
        delete (this->_brain);
        //if (src._brain != nullptr)
        if (src.getBrain() != nullptr)
            this->_brain = new Brain(*src.getBrain());
            //this->_brain = new Brain(*src._brain);
        else
            this->_brain = nullptr;
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
