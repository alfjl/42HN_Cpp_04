#include <iostream>
#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Default constructor for Cat class called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
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
        this->Animal::_type = src.Animal::_type;
        std::cout << "Assignment overload for Cat class type " << this->Animal::_type << " called" << std::endl;
        if (this->_brain != nullptr)
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
