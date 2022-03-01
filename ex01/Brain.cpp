#include <iostream>
#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Default constructor for Brain class called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    *this = other;
    std::cout << "Copy constructor for Brain class called" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Destructor for Brain class called" << std::endl;
}

Brain       &Brain::operator=(const Brain &src)
{
    if (this != &src)
    {
        for (int i = 0; i < 100; i++)
        {
            this->_ideas[i] = src._ideas[i];
        }
    }
    return (*this);
}

std::string Brain::operator[](const int i) const
{
    return (this->_ideas[i]);
}
