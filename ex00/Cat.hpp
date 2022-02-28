#pragma once

#include "Animal.hpp"

class   Cat : public Animal
{
protected:
    std::string type;

public:
    Cat();
    Cat(const Cat &other);
    ~Cat();

    Cat     &operator=(const Cat &src);
    void    makeSound() const;
};
