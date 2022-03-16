#include <iostream>
#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat")
{
    std::cout << "Default constructor for Cat class called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat &other) : AAnimal(other)
{
	this->_brain = nullptr;
    *this = other;
    std::cout << "Copy constructor for Cat class called" << std::endl;
}

Cat::~Cat(void)
{
    delete (this->_brain);
    std::cout << "Destructor for Cat class called" << std::endl;
}

Cat     &Cat::operator=(const Cat &src)
{
    if (this != &src)
    {
        this->AAnimal::_type = src.AAnimal::_type;
        std::cout << "Assignment overload(Cat) for Cat class type " << this->AAnimal::_type << " called" << std::endl;
        if (this->_brain != nullptr)
            delete (this->_brain);
        if (src.getBrain() != nullptr)
            this->_brain = new Brain(*src.getBrain());
        else
            this->_brain = nullptr;
    }
    return (*this);
}

AAnimal     &Cat::operator=(const AAnimal &src)
{
    if (this != &src)
    {
        this->AAnimal::_type = src.getType();
        std::cout << "Assignment overload(AAnimal) for AAnimal::Cat class type " << this->AAnimal::_type << " called" << std::endl;
        if (this->_brain != nullptr)
            delete (this->_brain);
        this->_brain = new Brain(*src.getBrain());
    }
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Cat purrrrrrs!!!!!" << std::endl;
}

Brain   *Cat::getBrain(void) const
{
    return (this->_brain);
}

void    Cat::setIdea(const std::string idea)
{
    *(this->_brain)->_ideas = idea;
}
