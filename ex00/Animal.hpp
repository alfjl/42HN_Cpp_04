#pragma once

#include <string>

class   Animal
{
protected:
    std::string _type;

public:
    Animal(void);
    Animal(std::string type);
    Animal(const Animal &src);
    virtual ~Animal(void);

    Animal  &operator=(const Animal &src);

    virtual void    makeSound(void) const;
    std::string     getType(void) const;
};
