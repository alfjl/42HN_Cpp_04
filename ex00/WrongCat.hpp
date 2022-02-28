#pragma once

#include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat &other);
    ~WrongCat();

    WrongCat     &operator=(const WrongCat &src);
    void    makeSound() const;
};
