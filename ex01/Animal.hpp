#pragma once

#include <string>
#include "Brain.hpp"

class   Animal
{
protected:
    std::string _type;

public:
    Animal(void);
    Animal(std::string type);
    Animal(const Animal &src);
    virtual ~Animal(void);

    virtual Animal  &operator=(const Animal &src);

    virtual void    makeSound(void) const;
    std::string     getType(void) const;
    virtual Brain   *getBrain(void) const;
    virtual void    setIdea(const std::string idea);
};
