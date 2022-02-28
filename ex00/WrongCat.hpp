#pragma once

#include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal
{
protected:
    std::string type;

public:
    WrongCat();
    WrongCat(const WrongCat &other);
    ~WrongCat();

    WrongCat     &operator=(const WrongCat &src);
    void    makeSound() const;
};
