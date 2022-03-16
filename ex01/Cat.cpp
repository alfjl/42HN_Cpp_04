#include <iostream>
#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Default constructor for Cat class called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
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
        this->Animal::_type = src.Animal::_type;
        std::cout << "Assignment overload(Cat) for Cat class type " << this->Animal::_type << " called" << std::endl;
        if (this->_brain != nullptr)
            delete (this->_brain);
        if (src.getBrain() != nullptr)
            this->_brain = new Brain(*src.getBrain());
        else
            this->_brain = nullptr;
    }
    return (*this);
}

Animal     &Cat::operator=(const Animal &src)
{
    if (this != &src)
    {
        this->Animal::_type = src.getType();
        std::cout << "Assignment overload(Animal) for Animal::Cat class type " << this->Animal::_type << " called" << std::endl;
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
