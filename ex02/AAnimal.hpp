#pragma once

#include <string>
#include "Brain.hpp"

class   AAnimal
{
protected:
    std::string _type;

public:
    AAnimal(void);
    AAnimal(std::string type);
    AAnimal(const AAnimal &src);
    virtual ~AAnimal(void);

    virtual AAnimal  &operator=(const AAnimal &src);

    virtual void    makeSound(void) const = 0;
    std::string     getType(void) const;
    virtual Brain   *getBrain(void) const;
    virtual void    setIdea(const std::string idea);
};
